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
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
