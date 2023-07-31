#include "main.h"

/**
 * set_string - set value of a pointer to a char
 *
 * @s: source of string
 * @to: destination of string
 */

void set_string(char **s, char *to)
{
	if (s != NULL)
	{
		*s = to;
	}
}
