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
	unsigned int i = 0;
	char *ar;

	ar = (char *) malloc(size);
	if (size == 0)
	{
		return (NULL);
	}
	if (ar == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(ar + i) = c;
		i++;
	}
	return (ar);
}
