#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if alphabet
 *
 * @c - parament to check
 *
 * Return: 1 if letter
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
