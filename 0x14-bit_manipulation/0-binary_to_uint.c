#include "main.h"

/**
 * power - calculates power
 *
 * @base: base number
 * @exponent: eponent of the base
 *
 * Return: power.
 */

int power(int base, int exponent)
{
	int result = 1, i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: binary
 *
 * Return: converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, len = strlen(b), i;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			dec += power(2, len - 1	- i);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (dec);
}
