#include "main.h"

/*Declaration of print_alphabet_x10 function */
void print_alphabet_x10(void);

/**
 * print_alphabet_x10 - entry point
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)

{
	int n = 0;
	char c = ('a');

	while (n <= 9)
	{
		chac c = ('a');

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		
		}
		n++;
		_putchar('\n');
	}
	return (0);
}
