#include "main.h"

/**
 * reverse_array - reverse array
 *
 * @a: array name to be reversed
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int temp, i, temp2;

	if (n == 2)
	{
		temp2 = a[0];
		a[0] = a[1];
		a[1] = temp2;
	}
	else if (n >= 1)
	{
		for (i = 0; i <= n / 2; i++)
		{
			temp = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = temp;
		}
	}
}
