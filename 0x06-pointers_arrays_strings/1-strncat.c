#include "main.h"

/**
 * * _strncat - adds two things together
 * @dest: string pointer
 * @src: source pointer string
 * @n: integer
 * Return: char data type
 */

char *_strncat(char *dest, char *src, unsigned long n)
{
	unsigned long i;
	unsigned long len;

	len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	i++;
	dest[len + i] = '\0';

	return (dest);
}
