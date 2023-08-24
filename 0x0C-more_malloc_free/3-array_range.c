#include "main.h"

/**
 * array_range - create an array of integer
 *
 * @min: min number
 * @max: max number
 *
 * Return: array
 */

int *array_range(int min, int max)
{
	int i, j, k = 0;
	int *arr = NULL;

	if (min > max)
		return (NULL);
	j = (max - min) + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[k] = i;
		k++;
	}
	return (arr);
}
