#include "main.h"

/**
 * main - main function
 *
 * @argc: number of arguments passed
 * @argv: argument passed to the program
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
