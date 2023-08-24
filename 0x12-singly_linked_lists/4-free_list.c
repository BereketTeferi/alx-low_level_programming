#include "lists.h"
#include <stdlib.h>
#include <string.h>

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

/**
 * free_list - frees linked list
 *
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	int length = list_len(head), i;
	list_t *list;

	for (i = 0; i <= length; i++)
	{
		while (head != NULL)
		{
			list = head;
			head = head->next;
			free(list->str);
			free(list);
		}
	}
	free(head->str);
	free(head);
}
