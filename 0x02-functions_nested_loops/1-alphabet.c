#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
