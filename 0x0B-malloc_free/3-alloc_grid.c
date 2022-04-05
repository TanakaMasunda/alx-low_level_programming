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
	int **ptr;
	int i;

	i = 0;

	ptr = malloc(width * sizeof(int *));

	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(height * sizeof(int));
	}

	return (ptr);
}
