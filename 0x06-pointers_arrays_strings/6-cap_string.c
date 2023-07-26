#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - capitalize string
 *
 * @str: string to capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == ',' || str[i - 1] == '.')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '!' || str[i - 1] == '?')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == ';' || str[i - 1] == '"')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
		else if (str[i - 1] == '(' || str[i - 1] == ')')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);
}
