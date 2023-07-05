#include <stdio.h>

/**
 * main - print numbers combination
 *
 * Description - prints numbers combination
 *
 * Return: 0 if success non-zero if failure
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

