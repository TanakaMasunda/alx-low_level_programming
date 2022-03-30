#include "main.h"

/**
 * _puts_recursion - to print a string using recursion method
 * @s: characters of a string
 * Return: returns -1 if there is an error and 1 on success
 *
 */

void _puts_recursion(char *s)
{
	if (*s =='\0')
		printf("%c", *s);
	printstring(s + 1);
}

int main(void)
{

	char s[50];
	
	printstring (s);

	return (0);
}
