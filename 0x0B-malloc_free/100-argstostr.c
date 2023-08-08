#include "main.h"

/**
 * argstostr - concat all arguments passed
 *
 * @ac: argv counter
 * @av: argument
 *
 * Return: poiner to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *string;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	string = malloc(len + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[k] = av[i][j];
			k++;
		}
		string[k] = '\n';
		k++;
	}
	string[k] = '\0';
	return (string);
}
