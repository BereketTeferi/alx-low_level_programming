#include "main.h"

/**
 * create_array - creates array of characters
 *
 * @size: size of array
 * @c: character
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	return (ar);
}
