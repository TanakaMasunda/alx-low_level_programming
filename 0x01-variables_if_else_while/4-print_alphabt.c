#include <stdio.h>

/**
 * main - alphabet skip q and e
 * Return: 0 if exited properly
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')

	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
		}
		else
		{
			putchar(ch);
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
