#include "lists.h"

/**
 * print_listint - prints elements in list
 *
 * @h: pointer of head of list
 *
 * Return: number of elements in list
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
