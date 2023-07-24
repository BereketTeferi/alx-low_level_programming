#include "main.h"

/**
 * swap_int - swap two numbers
 *
 * @a: parameter passed
 * @b: parameter passed
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
