#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diffrence of two numbers
 *
 * @a: first number
 * @b: second numer
 *
 * Return: diffrence
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: quotient
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of division
 *
 * @a: first number
 * @b: second number
 *
 * Return: modulo of two number
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
