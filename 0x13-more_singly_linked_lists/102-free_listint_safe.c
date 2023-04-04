#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of the list
 * Return: the size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t size = 0;
	hash_table_t *ht = NULL;

	ht = create_hash_table(1024);

	if (ht == NULL)
		exit(98);

	current = *h;
	while (current != NULL)
	{
		if (hash_table_t(ht, current, ""))
		{
			tmp = current;
			current = current->next;
			free(tmp);
			size++;
		}
		else
		{
			breake;
		}
	}
	free_hash_table(ht);
	*h = NULL;

	return (size);
}
