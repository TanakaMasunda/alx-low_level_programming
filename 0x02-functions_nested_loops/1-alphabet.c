#include "main.h"
/* declaration of alphabet */
void print_putchar(void);

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	
	print_putchar();
	return (0);
}
/**
 * print_putchar - writes the alphabet to stdout
 */
void print_putchar(void)
{
	
	
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
