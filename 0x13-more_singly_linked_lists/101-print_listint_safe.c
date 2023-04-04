#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (hare != NULL && hare->next != NULL)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			break;
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	}
	if (hare == NULL || hare->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		count = 1;
		hare = hare->next;

		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			hare = hare->next;
			count++;
		}
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);

		hare = tortoise->next;
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			count++;
		}
		printf("Loop starts at [%p] %d\n", (void *)tortoise, tortoise->n);
	}
	return (count);
}
