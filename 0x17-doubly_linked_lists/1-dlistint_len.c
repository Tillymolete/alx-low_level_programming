#include "lists.h"

/**
 * dlistint_len -  returns the number of elements
 * Return: elements of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
