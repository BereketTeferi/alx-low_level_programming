#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node to end of list
 *
 * @head: head of the list
 * @str: string to be added
 *
 * Return: address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int n;
	char *string;
	list_t *new, *last;

	n = strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = n;
	new->str = string;
	new->next = NULL;

	if(*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (new);
}
