#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if its lower
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */

int _islower(int c)
{
	if(islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
