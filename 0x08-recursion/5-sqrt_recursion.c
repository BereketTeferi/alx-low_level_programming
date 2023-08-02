#include "main.h"
int sqrt_helper(int n, int min, int max);

/**
 * _sqrt_recursion - square root of a number recursively
 *
 * @n: number to be rooted
 *
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (sqrt_helper(n, 0, n) == (int)sqrt_helper(n, 0, n))
	{
		return (sqrt_helper(n, 0, n));
	}
	else
	{
		return (-1);
	}
}

/**
 * sqrt_helper - helper function
 *
 * @n: number  to be square rooted
 * @min: minimun number guessed
 * @max: maximum number guessed
 *
 * Return: square root
 */

int sqrt_helper(int n, int min, int max)
{
	int mid = (min + max) / 2;
	int sq = mid * mid;

	if (min > max)
	{
		return (-1);
	}
	if (sq == n)
	{
		return (mid);
	}
	else if (sq < n)
	{
		return (sqrt_helper(n, mid + 1, max));
	}
	else
	{
		return (sqrt_helper(n, min, mid - 1));
	}
}
