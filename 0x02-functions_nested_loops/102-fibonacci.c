#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fabbonacci
 *
 * Return: 0 if success
 */

int main(void)
{
	long count, new = 1, prev = 1, temp;

	printf("%ld, ", prev);
	for (count = 0; count < 50; count++)
	{
		temp = new;
		new += prev;
		printf("%ld, ", new);

		prev = temp;
	}
	return (0);
}
