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
	int i, j;
	char alpha[] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E',
		'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j',
		'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N',
		'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's',
		'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W',
		'x', 'X', 'y', 'Y', 'z', 'Z'};
	char rot[] = {'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R',
		's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W',
		'x', 'X', 'y', 'Y', 'z', 'Z', 'a', 'A', 'b', 'B',
		'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G',
		'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 104; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
			}
		}
	}
	return (str);
}
