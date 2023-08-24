#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints linked list
 *
 * @h: head of the linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		n++;
	}

	return (n);
}
