#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 *
 * @a: pointer to array
 * @size: size of array passed
 */

void print_diagsums(int *a, int size)
{
	int i, j, num1 = 0, num2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				num1 = num1 + a[i * size + i];
			}
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - 1;j >= 0; j--)
		{
			if ((i + j) == (size - 1))
			{
				num2 = num2 + a[(i + 1) * (size - 1)];
			}
		}
	}
	printf("%d, %d\n", num1, num2);
}
