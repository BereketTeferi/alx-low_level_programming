#include "main.h"
#include <string.h>

/**
 * str_concat - concat two strings passed
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: conated string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	return (str);
}
