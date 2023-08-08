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
	int len = strlen(str);

	string = (char *) malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (i == j)
			{
				string[j] = str[i];
			}
		}
	}
	string[j] = '\0';
	return (string);
}
