#include "main.h"

/**
 * flip_bits - the number of bits needed to flip to get from n to m
 *
 * @n: first unsigned long int
 * @m: second unsigned long int
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
