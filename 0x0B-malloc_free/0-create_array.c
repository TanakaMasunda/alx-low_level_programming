#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @c: characters of the array
 * @size: size of the arrays
 * @ptr: pointer
 * Return: return null if size is 0,null if it fails
 */

char *create_array(unsigned int size, char c)
{

	if (size == 0)
		return (0);

	{
		char *ptr;

		if (*ptr == 0)
			return (0);

		for (*ptr > 0; *ptr < size; *ptr++)
		
	*ptr = malloc(sizeof(char) * size);
	return (ptr);
	}
}
