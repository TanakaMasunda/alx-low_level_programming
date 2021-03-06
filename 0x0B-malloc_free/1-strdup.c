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
	 int i, len;
	char *ptr;

	len = 0;
	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len]	!= '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
			i++;
	}

	return (ptr);
}
