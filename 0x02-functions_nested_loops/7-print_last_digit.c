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
	_putchar(abs(n) % 10);
	return (abs(n) % 10);
}
