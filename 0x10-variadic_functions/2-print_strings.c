#include "variadic_functions.h"

/**
 * print_strings - prints strings passed
 *
 * @separator: separates string
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(str, char*) == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", va_arg(str, char*));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
		else
			printf("%s", "");
	}
	va_end(str);
	printf("\n");
}
