#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the pointer
 * @grid: the double pointer
 * @height: parameter of an array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
