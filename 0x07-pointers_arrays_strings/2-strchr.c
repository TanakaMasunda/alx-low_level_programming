#include "main.h"

/**
 * _strchr - returns pointer to first occurance in a string
 * @c: the character
 * @s: pointer
 * Return: null if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0''; i++)
		if (*(s + i) == c)

			return (s + i);

	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}
