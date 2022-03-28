#include "main.h"

#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: destination of memory area
 * @src: source of memory area
 * @n: n bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		(dest[i]) = (src[i]);

		return (dest);
}
