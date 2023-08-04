#include "main.h"
#include <stdlib.h>

/**
 * main - main function
 *
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	int change = 0, money = 0, i = 0;
	int value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	money = atoi(argv[i]);
	if (money < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (money)
	{
		if (money < value[i])
		{
			i++;
			continue;
		}
		money -= value[i];
		change++;
	}
	printf("%d\n", change);
	return (0);
}
