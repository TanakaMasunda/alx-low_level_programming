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

	width = 0;
	height = 0;
	i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
			return (NULL);
	}

	while (width < height)
	{
		while (height < width)
		{
			ptr([width] * [height]) = 0;
			height++;
		}
		printf("\n");
		width++;
	}


	return (ptr);
}
