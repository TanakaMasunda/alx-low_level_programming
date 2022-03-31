#include "main.h"
#include <math.h>

/**
 * _sqrt_recur - helperfunction
 * @n: number
 * @x: number
 * Return: outpu
 */
int _sqrt_recur(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recur(n, x + 1));
}

/**
 * _sqrt_recursion - square root of integers
 * @n: integer
 * Return: -1 if there is no natural square root
 */

int _sqrt_recursion(int n)
{
		return (_sqrt_recur(n, 0));
}
