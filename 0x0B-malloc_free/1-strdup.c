#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a function to a string which is a duplic of str
 * @str: the original string
 * Return: null if str is null, if insufficient memory was available
 * On success, the _strdup function returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i;

	str = malloc(size_t * sizeof(char));
	if (str == NULL || size_t > str)
	{
		return (NULL);
	}
	for (i = 0; i < size_t; i++)
	{
		str[i] = *str;
	}
	return (str);
}
