#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to 2d array
 * @width: 1 side of array
 * @height: 1 side of array
 * Return: null on failure, null if width and height are negative or 0
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	j = 0;
	i = 0;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{

		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)

		for (j = 0; j < width; j++)
			grid[i][j] = 0;


	return (grid);
}
