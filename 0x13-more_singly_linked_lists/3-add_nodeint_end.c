#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head of a linked list
 * @n: an  integer that creates a new node
 * Return: Null if function, otherwise a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node-> = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
