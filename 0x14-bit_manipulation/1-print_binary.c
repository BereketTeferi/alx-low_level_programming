#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{
			mask = mask >> 1;
			continue;
		}
		else
		{
			flag = 1;
			if ((n & mask) == 0)
				putchar('0');
			else
				putchar('1');
		}
		mask = mask >> 1;
	}
}
