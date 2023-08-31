#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 *
 * @n: integer
 * @index: index of bit
 *
 * Return: Value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
