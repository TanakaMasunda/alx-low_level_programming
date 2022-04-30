#include "main.h"

#include <string.h>

/**
 * binary_to_uint - convert binary to unsigned integer
 * @b: the pointer to a string of 0s and 1s
 * Return: converted int or 0 if b is NULL or
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dig;
	int i;
	int len;

	if (!b)
		return (0);

	dig = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, i = 1; len >= 0; len--, i *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			dig += i;
		}
	}
	return (dig);
}
