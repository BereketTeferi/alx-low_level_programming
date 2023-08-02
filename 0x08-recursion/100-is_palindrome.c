#include "main.h"
int str_len(char *s);
int palindrome_checker(char *s, int len, int i);

/**
 * is_palindrome - checks if a string is the same in reverse
 *
 * @s: string to check if palindrome
 *
 * Return: 1 if palindrome else 0
 */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, str_len(s) - 1, 0));
}

/**
 * str_len - calculate the length of string
 *
 * @s: string passed
 *
 * Return: length of string
 */

int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * palindrome_checker - checks if palindrome
 *
 * @s: string to be check
 * @len: length of string
 * @i:initial value
 *
 * Return: 1 if palindrome 0 otherwise
 */

int palindrome_checker(char *s, int len, int i)
{
	if (s[i] != s[len])
	{
		return (0);
	}
	else if (s[i + 1] == '\0')
	{
		return (1);
	}
	return (palindrome_checker(s, len - 1, i + 1));
}
