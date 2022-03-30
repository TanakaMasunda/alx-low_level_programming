#include "main.h"
#include <stdio.h>

/**
 * main - function main
 * Return: 0 on success
 */

int main(void)
{
	char s[50];

	_print_rev_recursion(s);
	printf("\n");

	return (0);
}

/**
 * _print_rev_recursion - print string in reverse using recursion
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
