#include "main.h"

/**
 * clear_bit - clear a bit, change to zero
 * @n: number of shifts
 * @index: position at which the bit to be changed is
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		
		*n ^= m;
	return (1);
}
