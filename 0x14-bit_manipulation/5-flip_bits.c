#include "main.h"

/**
 * flip_bits - number of bits required to flip to get frm a number to another
 * @n: num 1
 * @m: num 2
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
