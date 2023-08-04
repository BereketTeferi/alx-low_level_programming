#include "main.h"
#include <string.h>

/**
 * _strncat - clone of strncat
 *
 * @dest: destination of trancated string
 * @src: source of string
 * @n: most bytes to be used
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
