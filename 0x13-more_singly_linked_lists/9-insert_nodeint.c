#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to a pointer of the head
 * @idx: index where new node is stored
 * @n: an integere to store the new node
 * Return: address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	temp = *head;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx -1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
