#include "lists.h"
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - count the number of nodes in the looped list
 * @head: a pointer to the head of the listint_t
 * @Return: 0 if list is not looped, otherwise the number of nodes
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t size = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				size++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				size++;
				tortoise = tortoise->next;
			}
			return (size);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of the list
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t size, index;

	size = looped_listint_count(*h);

	if (size == 0)
	{
		for(; h != NULL && *h != NULL; size++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (index = 0; index < size; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;
	return (size);
}
