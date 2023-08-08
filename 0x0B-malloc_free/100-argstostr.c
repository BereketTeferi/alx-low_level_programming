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
	int i, j, len = 0;
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
	len++;
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[len] = av[i][j];
			len++;
		}
		string[len] = '\0';
		len++;
	}
	string[len] = '\0';
	return (string);
}
