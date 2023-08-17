#include "variadic_functions.h"

/**
 * print_all - prints everything
 *
 * @format: types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int i;
	char *string, *separator = "";
	va_list print;

	va_start(print, format);

	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(print, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(print, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(print, double));
					break;
				case 's':
					string = va_arg(print, char*);
					if(!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(print);
	printf("\n");
}
