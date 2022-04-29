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
	unsigned int dig = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	len = strlen(b);

	if (!b)
		return (0);

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += dig;
		}

		dig *= 2;
	}
	return (i);
}
