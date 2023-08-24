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
	int n;
	list_t *current;
	current = h;

	while (current != NULL)
	{
		if (current -> str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s", current -> len, current -> str);
		}
		n++;
	}

	return (n);
}
