#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of listint_t
 * @head: pointer to a pointer to the start of the linked list
 * @index: index of the node to be deleted
 * Return: 1 at success otherwise -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = *head;
	temp = prev->next;

	for (i = 1; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
