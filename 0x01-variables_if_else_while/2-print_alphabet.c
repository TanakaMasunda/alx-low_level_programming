#include <stdio.h>
/**
 * main - lowercase alphabet
 * Return: 0 if exited properly
 */

int main(void)
{
	char ch = 'a';
	while(ch <= 'z')
		ch++;
	putchar( ch );
	return (0);
}
