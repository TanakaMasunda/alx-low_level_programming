#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print upto 98
 *
 * @n: an input integer
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n <= 98; n++)
		{
			_putchar(n);
			
			if (n ==98)
				continue;
			_putchar(',');
		}
		_putchar('\n');

	}
	else
	{
		for(; n >= 98; n--)
		{
			_putchar(n);

			if (n == 98)
				continue;
			_putchar(',');
		}
		_putchar('\n');
	}
}
