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
		if (i == nobytes - 1)
		{
			printf("%02hhx", opcode[i]);
			break;
		}
		printf("%02hhx\n", opcode[i]);
	}
	return (0);
}
