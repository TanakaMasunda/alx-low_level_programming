#include "main.h"

/**
 * print_sign - print sign of a number
 *
 * @c: character to check
 *
 * Return: Always 1 if greater than zero, 0 is zero and -1 is less than zero
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar('+');
	}
	else if (n == 0)
	{
		_putchar(0);
	}
	else
	{
		_putchar(-1);
	}
}
