#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t, and returns node data(n)
 * @head: a  double pointer to the head of linked list
 * Return: 0 if linked list is empty, otherwise the current head node
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (*head == NULL)
		return (0);

	current = *head;
	*head = (*head)->next;
	n = cuurent->n;
	free(current);

	return (n);
}
