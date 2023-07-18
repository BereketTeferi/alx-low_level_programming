#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fabbonacci
 *
 * Return: 0 if success
 */

int main(void)
{
	int count, new = 1, prev = 1, temp;

	printf("%d, ",prev);
	for(count = 0; count < 50; count++)
	{
		temp = new;
		new += prev;
		printf("%d, ", new);

		prev = temp;
	}	

	return (0);
}
