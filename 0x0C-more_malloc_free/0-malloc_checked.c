#include "main.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory passed
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		exit(98);
	}
	if (b == INT_MAX)
	{
		exit(98);
	}
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
