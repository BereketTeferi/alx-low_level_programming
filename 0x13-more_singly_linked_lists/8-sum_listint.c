#include "lists.h"

/**
 * sum_listint - sum all data in list
 *
 * @head: head of linked list
 *
 * Return: sum if success
 * else 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
