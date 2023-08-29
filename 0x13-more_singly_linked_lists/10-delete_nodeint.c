#include "lists.h"

/**
 * delete_nodeint_at_index - delete
 * element at give node
 *
 * @head: head of linked list
 * @index: index
 *
 * Return: 1 if success
 * -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *current;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	while (current)
	{
		if (count == index - 1 && current->next != NULL)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
