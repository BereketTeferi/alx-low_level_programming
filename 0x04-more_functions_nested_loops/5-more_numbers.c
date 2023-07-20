#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				k = j % 10;
				_putchar(((j - k) / 10) + '0');
				_putchar(k + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
