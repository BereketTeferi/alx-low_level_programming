#include "lists.h"

/**
 * free_listint_safe - frees listint_t list
 *
 * @h: head of linked list
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *aux;
	size_t len = 0;

	if (!h || !*h)
		return (0);
 
	tmp = *h;
	*h = NULL;
	while (tmp)
	{
		len++;
		aux = tmp->next;
		free(tmp);
		tmp = aux;
		if (tmp <= aux) 
			break;
	}
	return (len);
}
