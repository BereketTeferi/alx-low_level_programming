#include "lists.h"

/**
 * reverse_listint - reverse linked list
 *
 * @head: head of linked list
 *
 * Return: pointer to first linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	*head = prev;
	return (*head);
}
