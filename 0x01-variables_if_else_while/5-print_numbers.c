#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description - prints numbers fron one to nine
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d",i);
	}
	printf("\n");
	return (0);
}
