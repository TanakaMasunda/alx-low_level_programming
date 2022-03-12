#include <stdio.h>

/**
 * main - alphabet lower and uppercase
 * Return: 0 if exited properly
 */

int main(void)

{
	char chl = 'a';
	char chU = 'A';

	while (chl <= 'z')

	{
		putchar(chl);
		chl++;
	}

	while (chU <= 'Z')

	{
		putchar(chU);
		chU++;
	}
	putchar('\n');
	return (0);
}
