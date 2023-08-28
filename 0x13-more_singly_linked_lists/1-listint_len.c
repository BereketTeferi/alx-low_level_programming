#include "lists.h"

/**
 * listint_len - return linked list length
 *
 * @h: head of the linked list
 *
 * Return: number of linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
