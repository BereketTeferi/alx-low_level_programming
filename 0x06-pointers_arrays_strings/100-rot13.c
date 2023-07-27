#include "main.h"

/**
 * rot13 - encodes characters with 13
 *
 * @str: string to be encoded
 *
 * Return: encoded str
 */

char *rot13(char *str)
{
	int i;
	char j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (str[i] < 'n')
			{
				str[i] = str[i] + 13;
			}
		}
	}
	return (str);
}
