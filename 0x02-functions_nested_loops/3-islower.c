#include "main.h"

/* Declaration of lowercase character function */
int _islower(int c);

/**
 * _islower - entry point
 *
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */

int _islower(int c)

{
	char c;

	_putchar(c);

	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
