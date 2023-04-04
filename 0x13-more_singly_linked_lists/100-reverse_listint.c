#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the address of the head
 * Return: the new head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		curr-> = prev;
		prev = curr;
		curr = next:
	}
	*head = prev;
	return (*head);
}
