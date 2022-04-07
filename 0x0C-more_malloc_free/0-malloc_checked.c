#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer
 * Return: a pointer to the allocated memory,or 98 status value
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int));

	if (ptr != NULL)
		return (ptr);

	else if (ptr == NULL)
		exit (98);
}
