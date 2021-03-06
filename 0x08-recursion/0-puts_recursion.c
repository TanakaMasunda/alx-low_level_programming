#include "main.h"

/**
 * _puts_recursion - to print a string using recursion method
 * @s: characters of a string
 * Return: returns -1 if there is an error and 1 on success
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

		_putchar(*s);
	_puts_recursion(s + 1);
}
