#include "main.h"

/**
 * _strdup - contains a copy of the string given as a parameter
 *
 * @str: string passed
 *
 * Return: duplicate of str
 */

char *_strdup(char *str)
{
	char *string;

	string = (char*) malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	string = str;
	return (string);
}
