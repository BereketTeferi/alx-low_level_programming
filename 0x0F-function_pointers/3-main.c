#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - checks the program
 *
 * @arcou: argument counter
 * @arr: array of arguments
 *
 * Return: 0
 */

int main(int arcou, char **arr)
{
	int (*op)(int, int);

	if (arcou != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	op = get_op_func(arr[2]);
	if (!op)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	printf("%d\n", op(atoi(arr[1]), atoi(arr[3])));
	return (0);
}
