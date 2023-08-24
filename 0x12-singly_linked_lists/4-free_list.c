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

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
	free(head->str);
	free(head);
}
