#include "main.h"

/**
 * _pow_recursion - solve power using recursion
 *
 * @x: numbers passed to be powered
 * @y: exponent of the number
 *
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
