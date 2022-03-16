#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @n: character to check
 *
 * Return: Always 1 if greater than zero, 0 is zero and -1 is less than zero
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
	}
}
