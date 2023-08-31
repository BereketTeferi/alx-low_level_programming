#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: binary
 *
 * Return: converted binary
 */

unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		dec = dec << 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
