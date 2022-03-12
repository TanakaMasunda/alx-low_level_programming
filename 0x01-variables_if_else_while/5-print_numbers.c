#include <stdio.h>

/**
 * main - print numbers of base 10
 * Return: 0 if exited properly
 */

int main(void)
{
	char ch = '0';

	while (ch >= 9)

	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
