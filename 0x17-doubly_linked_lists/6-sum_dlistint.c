#include "lists.h"

/**
 * sum_dlistint - sum of all the data 
 * @head: the pointer to the head
 * Return: the sum of data in element
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
