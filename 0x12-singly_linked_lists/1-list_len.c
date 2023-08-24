#include "lists.h"

/**
 * list_len - counts number of elements in
 * linked list
 *
 * @h: head of the linked list
 *
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
