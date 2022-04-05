#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: null if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *nstr;
	int i, j, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1 != NULL && s1[len1] != '\0')
		len1++;
	while (s2 != NULL && s2[len2] != '\0')
		len2++;

	nstr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (nstr == NULL)
		return (NULL);

	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}


