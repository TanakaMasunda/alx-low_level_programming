#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: 0 if success
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
