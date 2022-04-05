#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a function to a string which is a duplic of str
 * @str: the original string
 * @len: length of strings
 * Return: null if str is null, if insufficient memory was available
 * On success, the _strdup function returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char c;
	unsigned int len;
	
	while (str[len] !='\0')
		len++;

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL || str[len] == '0')
	{
		return (NULL);
	}

	char c;

	for (i = 0; i < len; i++)
	{
		str[i] = c;
	}

	return (str);
}
