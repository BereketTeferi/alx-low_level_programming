#include "lists.h"

/**
 * free_listint - frees linked list
 *
 * @head: head of linked list
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	if (head == NULL)
		return;
	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
