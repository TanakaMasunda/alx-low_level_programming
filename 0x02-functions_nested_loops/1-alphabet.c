#include "main.h"
/* declaration of alphabet */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - writes the alphabet to stdout
 */
void print_alphabet(void)
{
	
	
	char ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
