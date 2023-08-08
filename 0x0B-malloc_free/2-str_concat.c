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
	int len1 = 0, len2 = 0, i, j;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
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
		for (j = 0; j <= len1; j++)
		{
			if (i == j)
			{
				str[j]  = s1[i];
			}
		}
	}
	for (i = 0; i <= len2; i++)
	{
		for (j = 0; j <= len2; j++)
		{
			if (i == j)
			{
				str[len1 + j]  = s2[i];
			}
		}
	}
	return (str);
}
