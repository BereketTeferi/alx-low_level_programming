#include "main.h"
#include <string.h>

/**
 * _memset - clone of memset
 *
 * @s: pointer address area
 * @b: constant byte
 * @n: usigned int
 *
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
