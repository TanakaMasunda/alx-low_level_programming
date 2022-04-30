#include "main.h"

/**
 * set_bit - set the bit (change ti 1)aat any given index
 * @n: integer value
 * @index: the position to be set
 * Returns: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	{
		return (-1);
	}

	m = 1 << index;
	*n = (*n | m);

		return (1);
}
