#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int i, nobytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nobytes = atoi(argv[1]);

	if (nobytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nobytes; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != nobytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
