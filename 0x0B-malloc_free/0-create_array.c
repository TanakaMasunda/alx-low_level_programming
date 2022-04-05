#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @c: characters of the array
 * @size: size of the arrays
 * Return: return null if size is 0,null if it fails
 */

char *create_array(unsigned int size, char c)
{

		char *ptr;
		unsigned int i;


	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);

}
