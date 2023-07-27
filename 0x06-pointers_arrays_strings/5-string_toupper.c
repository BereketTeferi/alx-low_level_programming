#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - change lower case to upper
 *
 * @str: string to be capitalized
 *
 * Return: the upper case
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
