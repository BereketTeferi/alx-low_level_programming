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
	const listint_t *list = h;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		count++;
		list = list->next;
	}
	return (count);
}
