#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints last digit
 *
 * @n: number to be calculated
 *
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');

	return (last);
}
