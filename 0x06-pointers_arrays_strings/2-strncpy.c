#include "main.h"
#include <string.h>

/**
 * _strncpy - clone strncpy
 *
 * @dest: destination of the string to be copied at
 * @src: source of string
 * @n: number
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
