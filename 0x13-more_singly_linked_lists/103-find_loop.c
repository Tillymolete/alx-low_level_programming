#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head of the list
 * Return: the address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			break;
		}
	}
	if (hare || !hare->next)
	{
		return (NULL);
	}
	hare = head;

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
