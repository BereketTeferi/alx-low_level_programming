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
	list_t *list = head;

	while (head != NULL)
	{
		while(list != NULL)
		{
			list = list->next;
		}
		free(list);
	}
	free(head);
}
