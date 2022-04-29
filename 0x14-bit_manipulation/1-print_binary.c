#include "main.h"

#include <string.h>

/**
 * print_binary - print binary of a number
 * @n: integer
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
