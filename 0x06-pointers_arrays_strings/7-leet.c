#include "main.h"
#include <string.h>

/**
 * leet - encodes string in 1337
 *
 * @str: string to encoded
 *
 * Return: encoded str
 */

char *leet(char *str)
{
	int i, j;
	char l[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char c[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = c[j];
			}
		}
	}
	return (str);
}
