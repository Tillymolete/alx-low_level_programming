#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all data(n) of a listint_t linked list
 * @head: a pointer to the head of of a linked list
 * Return: the sum of all data in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current =  current->next;
	}
	return (sum);
}
