#include "main.h"

/**
 * _strspn - clone of strspn
 *
 * @s: number of bytes in initial segment
 * @accept: the number of bytes to be counted
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
