#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * at given index
 *
 * @head: head of linked list
 * @idx: index element to be added
 * @n: element to be added
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	while (current)
	{
		if (count == idx - 1)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		count++;
	}
	free(new);
	return (NULL);
}
