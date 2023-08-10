#include "main.h"

/**
 * _realloc : realocates memory block
 * using malloc and free
 *
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar = NULL, *str = NULL, *pt = NULL;
	unsigned int i;

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
			return (NULL);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	pt = (char *)ptr;
	for (i = 0; i < old_size; i++)
		str[i] = pt[i];
	free(ptr);
	return (str);
}
