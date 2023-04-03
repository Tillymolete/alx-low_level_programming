#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the head of a linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		cureent = head;
		head = head->next;
		free(current);
	}
}
