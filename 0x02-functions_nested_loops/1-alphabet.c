#include <stdio.h>
#include "main.h"

/* Declaration of print_alphabet function */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
{
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - writes alphabet string to stdout
 */
void print_alphabet(void)
{
	
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
}
