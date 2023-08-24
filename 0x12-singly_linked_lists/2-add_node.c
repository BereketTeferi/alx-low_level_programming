#include <string.h>
#include "lists.h"

/**
 * add_node - add node at beggining of list
 *
 * @head: head of the list
 * @str: string to be added
 *
 * Return: address of new element if success
 * NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	int n;
	list_t *new;

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
	new->next = *head;
	*head = new;

	return (new);
}
