#include "main.h"

/**
 * get_bit - get the bit at any given index
 * @n: unsigned long in input
 * @index: position of a bit in a value
 * Return: the bit at index or -1 in an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
