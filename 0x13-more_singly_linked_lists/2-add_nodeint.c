#include "lists.h"

/**
 * add_nodeint - add node to the begnning
 *
 * @head: head of the linked list
 * @n: number to be added to the list
 *
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
