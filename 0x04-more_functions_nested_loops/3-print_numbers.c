#include "main.h"

/**
 * print_numbers - print numbers
 * Return: 0 if success
 */

void print_numbers(void)
{
	int i;

	while ((i >= 0) && (i <= 9))
	{
		printf("%d", i);
		i++;
	}
	_putchar('\n');
}
