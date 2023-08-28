#include "lists.h"

/**
 * free_listint2 - sets head to NULL
 *
 * @head: head of linked list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
