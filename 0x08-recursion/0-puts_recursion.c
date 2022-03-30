#include "main.h"

/**
 * _puts_recursion - to print a string using recursion method
 * @s: characters of a string
 * Return: returns -1 if there is an error and 1 on success
 *
 */

void _puts_recursion(char *s)
{
	if (*s =='\0')
	{
		_putchar(*s);
	_putchar(s + 1);
	}
}

int main(void)
{

	char s[50];
	
	_putchar(s);

	return (0);
}
