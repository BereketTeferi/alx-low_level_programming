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
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
