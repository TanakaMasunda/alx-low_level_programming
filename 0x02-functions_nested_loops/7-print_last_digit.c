#include "main.h"

/**
 * print_last_digit - print last digit
 *
 * @n: check characteristic
 *
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
