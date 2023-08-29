#include "lists.h"

/**
 * get_nodeint_at_index - nth node of linked list
 *
 * @head: head of linked list
 * @index: index of the node
 *
 * Return: nth node
 * else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
