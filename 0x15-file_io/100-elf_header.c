#include "main.h"

/**
 * main - main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 * or 98
 */

int main(int argc, char **argv)
{
	char st[64];
	int fp, rf;

	if (agrc != 2)
	{
		dprinf(STDERR_FILENO, "Usage: %s elf_file\n", argv[0]);
		exit(98);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't open this file %s\n", argv[1]);
		exit(98);
	}
	rf = read(file, st, 64);
	if (rf == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from this file %s\n", argv[1]);
		exit(98);
	}
	if (st[0] != 0x7f || st[1] != 'E' || st[2] != 'L' || st[3] != 'F')
	{
		fprintf(stderr, "%s is not an ELF file\n", argv[1]);
		exit(98);
	}

	close(fp);
	return (0);
}
