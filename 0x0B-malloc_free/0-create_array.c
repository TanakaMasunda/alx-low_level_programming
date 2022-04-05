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
		unsigned int i;

		if (ptr = 0)
			return (0);
		
	ptr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ptr [i] = c;


	return (ptr);
	}
}
