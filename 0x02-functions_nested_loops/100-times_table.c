#include "main.h"

/**
 * print_times_table_row - prints one row of the times table
 *
 * @i: first number in the row
 * @j: second number in the row
 */

void print_times_table_row(int i, int j)
{
	int k;
	k = i * j;
	if (k > 99)
	{
		int l = k % 10;
		int o = k / 100;
		int m = (k % 100) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(o + '0');
		_putchar(m + '0');
		_putchar(l + '0');
	}
	else if (k > 9 && k < 100)
	{
		int l = k % 10;
		int m = (k - l) / 10;
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(m + '0');
		_putchar(l + '0');
	}
	else
	{
		if (j != 0)
		{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			_putchar(32);
		}
		_putchar(k + '0');
	}
}

/**
 * print_times_table - prints the times table for number inputed
 *
 * @n: number passed to function
 */

void print_times_table(int n)
{
	int i, j;
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				print_times_table_row(i, j);
			}
			_putchar('\n');
		}
	}
}
