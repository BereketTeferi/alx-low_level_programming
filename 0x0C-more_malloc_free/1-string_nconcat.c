#include "main.h"

/**
 * string_nconcat - concats two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: first n byte of s2
 *
 * Return: pointer of concted string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size = n, i, j, len1 = 0, len2 = 0;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (; s2[len2] != '\0'; len2++)
	{
		;
	}
	if (size >= len2)
	{
		size = len2;
		newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		newstr = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		newstr[i] = s1[i];
	}
	for (j = 0; j <= size; j++)
	{
		newstr[i++] = s2[j];
	}
	newstr[i++] = '\0';
	return (newstr);
}
