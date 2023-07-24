#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of the string passed
 *
 * @str: parameter passed to be halfed
 */

void puts_half(char *str)
{
	int n, len, i;

	len = strlen(str);
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
	}
	else
		n = len / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
