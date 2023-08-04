#include "main.h"
#include <string.h>

/**
 * _strchr - clone of strchr
 *
 * @s: string to be searched
 * @c: characters to be searched
 *
 * Return: first occurance if found null if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
