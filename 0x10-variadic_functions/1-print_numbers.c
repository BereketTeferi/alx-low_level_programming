#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: separates numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pri;
	unsigned int i;

	va_start(pri, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pri, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pri);
	printf("\n");
}
