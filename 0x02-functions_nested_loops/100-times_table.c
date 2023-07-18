#include "main.h"

/**
 * print_times_table - prints time table for number inputed
 *
 * @n: number passed to function
 */

void print_times_table(int n)
{
	int i, j, k, l, m, o;
	
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k > 99)
				{
					l = k % 10;
					m = (k - l) / 10;
					o = k / 100;
					m = (k % 100) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(o + '0');
					_putchar(m + '0');
					_putchar(l + '0');
				}
				else if (k > 9 && k < 100)
				{
					l = k % 10;
					m = (k - l) / 10;
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
			_putchar('\n');
		}
	}
}
