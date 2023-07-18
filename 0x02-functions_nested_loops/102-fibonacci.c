#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fabbonacci
 *
 * Return: 0 if success
 */

int main(void)
{
	int count, new = 2, prev = 1;
	printf("%d, ",prev);
	for(count = 0; count < 50; count++)
	{
		new += prev;
		printf("%d, ", new);

		prev = new;
	}	

	return (0);
}
