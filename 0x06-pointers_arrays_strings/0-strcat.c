#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: destination string length
 * @src: source string length
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	unsigned long i;
	unsigned long n;

	n = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	i++;

	dest[n + i] = '\0';

	return (dest);
}
