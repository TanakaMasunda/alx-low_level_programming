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
	unsigned int len;
	char *ptr;

	len = 0;

	while (str[len]	!= '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));
	if (str == NULL || str[len] == '0')
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		str[i] = ptr[i];
	}

	return (ptr);
}
