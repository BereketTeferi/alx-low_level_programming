#include "main.h"

/**
 * alloc_grid - allocate 2d array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: 2d grid
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(grid + i) = malloc(sizeof(int) * (width + 1));
		if (*(grid + i) == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(*(grid + j));
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
