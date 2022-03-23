#include "main.h"

/**
 * _strncpy - string copy
 * @dest: destination of string
 * @src: source of string
 * @n: integer
 * Return: 0 if success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
