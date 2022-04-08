#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array,NULL if min>max and malloc fails
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	ar = malloc(sizeof(*ar) * ((max - min) + 1));


	if (min > max || ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
