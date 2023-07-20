#include "main.h"

/**
 * print_diagonal - prints  diagonal
 *
 * @n: number of diagonals
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
