#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of a linked list
 * @index: the index of the node
 * Return: the located node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		cuurent = current->next;
		count++;
	}
	if (count == index)
		return (current);
	else
		return (NULL);
}
