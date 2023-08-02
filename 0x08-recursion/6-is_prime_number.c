#include "main.h"

/**
 * is_prime_number - find if prime number recurcively
 *
 * @n: number passed
 *
 * Return: 1 if prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n % is_prime_number(n - 1) == 0)
	{
		return (1);
	}
	return (0);
}
