#include "main.h"
#include <string.h>

/**
 * _strcat - strcat clone
 *
 * @dest: destination of concatinated string
 * @src: source of string to be concatinated
 *
 * Return: result of string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
