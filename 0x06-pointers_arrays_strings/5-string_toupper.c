#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @n: char pointer
 * Return: always 0 on success
 */

char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if ((*(n + i) >= 97) && (*(n + i) <= 122))
			*(n + i) -= 32;

		i++;
	}

	return (n);
}
