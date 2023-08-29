#include "lists.h"

/**
 * pop_listint - pops element from list
 *
 * @head: head of the list
 *
 * Return: popped element data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;

	*head = (*head)->next;
	free(temp);
	return (data);
}
