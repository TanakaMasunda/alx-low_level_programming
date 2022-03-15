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
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
