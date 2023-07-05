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
	int i, j, l;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (l = j + 1; l < 58; l++)
			{
				putchar(i);
				putchar(j);
				putchar(l);
				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	
	return (0);
}
