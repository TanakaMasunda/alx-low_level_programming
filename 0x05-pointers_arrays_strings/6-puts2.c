#include "main.h"

/**
 * puts2 - prints 1 char of a string of 2
 * @str: input string
 * Return: void
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{

		_putchar('\n');
		break;
	}
	if (count % 2 == 0)
		_putchar(str[count]);
	count++;
}
}
