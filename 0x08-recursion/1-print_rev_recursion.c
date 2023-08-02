#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints string in reverse using recursion
 *
 * @s: string to be printed out
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
