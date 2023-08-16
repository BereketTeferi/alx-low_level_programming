#include "function_pointers.h"

/**
 * array_iterator - function that execute based
 * on parameter
 *
 * @array: name of array
 * @size: size of array
 * @action: the function passed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array != NULL && action != NULL && size > 0)
	{
		for (count = 0; count < size; count++)
			action(array[count]);
	}
}
