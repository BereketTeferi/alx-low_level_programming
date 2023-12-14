#include "main.h"

/**
 * binary_to_int - converts a binary string to an integer
 * @b: pointer to the binary string
 *
 * Return: the converted integer, or 0 if an error occured
 */
unsigned int binary_to_uint(const char *b)
{
	int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
