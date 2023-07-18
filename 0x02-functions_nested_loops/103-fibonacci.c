#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum of even
 *
 * Return: 0 if succes
 */

int main(void)
{
	int new = 2, prev = 1, sum = 0, count, temp;

	for (count = 0; count < 31; count++)
	{
		if (new % 2)
		{
			sum += new;
		}
		temp = new;
		new += prev;
		prev = temp;
	}
	printf("%d", sum);
	return (0);
}
