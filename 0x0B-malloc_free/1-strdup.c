#include "main.h"
#include <string.h>

/**
 * _strdup - contains a copy of the string given as a parameter
 *
 * @str: string passed
 *
 * Return: duplicate of str
 */

char *_strdup(char *str)
{
	int i, j;
	char *string;
	int len = 0;

	if (str == NULL)
	{

		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	string = malloc(sizeof(char) * len + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		for (j = 0; j <= len; j++)
		{
			if (i == j)
			{
				string[j] = str[i];
			}
		}
	}
	return (string);
}
