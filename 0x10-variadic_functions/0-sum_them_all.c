#include "variadic_functions.h"

/**
 * sum_them_all - sum of all
 * parameters passed
 *
 * @n: number of arguments
 *
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list su;
	unsigned int i;
	int sum = 0;

	va_start(su, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(su, int);
	}
	va_end(su);
	if (n == 0)
	{
		return (0);
	}
	else
		return (sum);
}
