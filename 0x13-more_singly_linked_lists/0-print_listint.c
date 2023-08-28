#include "lists.h"

/**
 * print_listint - prints lists in linked list
 *
 * @h: head of the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
