#include "main.h"

/**
 * atoi - extract int from string
 *
 * @s: string passed
 *
 * Return: 0 if no numbers in the string
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
 * @argv: argument passed
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
		return (0);
	}
}
