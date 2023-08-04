#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: number of command-line arguments
 * @argv: argument passed to program
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
