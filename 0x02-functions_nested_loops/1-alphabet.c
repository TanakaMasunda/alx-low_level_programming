#include "main.h"

/* Declaration of print_alphabet function */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

void print_alphabet(void)

{
	
	char c = ('a');
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
