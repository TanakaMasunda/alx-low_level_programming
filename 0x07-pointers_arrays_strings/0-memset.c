#include "main.h"

#include <string.h>

/**
 * _memset - fill memory with constant byte
 * @b: character to be store constant byte
 * @n: integer
 * @s: pointer
 * Return: pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;
	return (s);
}
