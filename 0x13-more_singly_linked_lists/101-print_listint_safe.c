#include "lists.h"

/**
 * print_listint_safe - prints linked list
 *
 * @head: head of linked list
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *temp = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current->next >= current)
		{
			if (temp == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
			temp = current;
			current = current->next;
		}
		else
		{
			current = current->next;
		}
	}
	return (count);
}
