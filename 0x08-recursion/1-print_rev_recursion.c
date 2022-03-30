#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - print string using recursion
 * @s: pointer
 * Return: 0 on success
 */
int main(void)
{
	char s[50];

	_print_rev_recursion(s);
	printf('\0');

	return (0);
}

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
