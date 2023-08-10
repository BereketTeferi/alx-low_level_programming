#include "main.h"

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number
 * @size: size
 *
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;
	unsigned int i;
	unsigned int j;
	char *k;

	if (size == 0 || nmemb == 0)
		return (NULL);
	i = nmemb * size;
	arr = malloc(i);
	k = (char *) arr;
	if (k != NULL)
	{
		for (j = 0; j < i; j++)
			k[j] = 0;
		return (k);
	}
	return (NULL);
}
