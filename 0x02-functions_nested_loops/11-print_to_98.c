#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_to_98 - print number up to 98 from given param
 *
 * @n: start of the number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for(n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for(n = n; n > 98; n--)
		{
			printf("%d, ",n);
		}
		printf("%d\n", 98);
	}
}
