#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum of even
 *
 * Return: 0 if succes
 */

int main(void)
{
	int new = 1, prev = 1, sum = 0, count, temp;

	for (count = 0; count < 27; count)
	{
		if (new % 2)
		{
			sum += new;
		}
		temp = new;
		new += prev;
		prev = temp;
	}
	return (0);
}
