#include "main.h"
#include <ctype.h>

/**
 * _isdigit - tests the string is an representation of an iteger
 *
 * @s: the string
 *
 * Return: 0 if it is not an int or 1 if it is
 */

int _isdigit(char *s)
{
	if (*s && *s == '-')
	{
		s++;
	}
	while (*s)
	{
		if (!(*s >= '0' && *s <= '9'))
		{
			return (0);
		}
		s++;
	}
	return (1);
}

/**
 * atoi - convert string of ints to integers
 * @s: the string representation of the integer
 *
 * Return: int
 */

int atoi(char *s)
{
	int num = 0;
	int sign = 1;

	if (*s && *s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s && *s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}
	return (num * sign);
}

/**
 * main - main function
 *
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 1, num = 0;

	if (argc < 2)
	{
		printf("%d\n", num);
		return (0);
	}
	while (i < argc)
	{
		if (!_isdigit(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		num = num + atoi(argv[i++]);
	}
	printf("%d\n", num);
	return (0);
}
