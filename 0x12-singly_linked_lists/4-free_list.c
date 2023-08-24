#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees linked list
 *
 * @head: head of the linked list
 */

void free_list(list_t *head)
{
	list_t *list;

	if (head == NULL)
		return;
	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
