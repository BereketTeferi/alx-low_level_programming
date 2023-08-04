#include "main.h"

/**
 * _strpbrk - strpbrk clone
 *
 * @s: string
 * @accept: string accepted to be searched for number of occurrance
 *
 * Return: return bytes of s that matched accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
