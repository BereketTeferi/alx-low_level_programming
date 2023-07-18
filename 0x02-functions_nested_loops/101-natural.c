#include <stdio.h>
#include <stdlib.h>

/**
 * main - compute all natural numbers multiple of 3 and 5
 *
 * Return: 0 if success
 */

int main(void)
{
	int sum = 0, count;

	for (count = 1; count <= 1024; count++)
	{
		if (count % 3 == 0)
		{
			sum += count;
		}
		else if (count % 5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);

	return (0);
}
