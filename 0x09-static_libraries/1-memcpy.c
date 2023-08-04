#include "main.h"
#include <string.h>

/**
 * _memcpy - memcpy clone
 *
 * @dest: destination of the buffer to be stored
 * @src: source of buffer
 * @n: size of array
 *
 * Return: destination of the buffer(dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
