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
	int i, j;

	j = 0;
	i = 0;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
	{

		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;


	return (ptr);
}
