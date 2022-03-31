#include "main.h"

/**
 * is_prime_num - helper function
 * @n: number
 * @x: number
 * Return: output
 */

int is_prime_num(int n, int x)
{
	if (n <= 1 || (n != x && n % x == 0))
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (is_prime_num(n, x + 1));
}

/**
 * is_prime_mumber - fxn returns 1 if input input integer
 * is a prime number , otherwise 0
 * @n: number integer
 * Return: output
 */

int is_prime_number(int n)
{
	return (is_prime_num(n, 2));
}
