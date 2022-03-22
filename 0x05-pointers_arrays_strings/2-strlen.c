#include "main.h"

/**
 * _strlen - length of a string
 * @s: input string
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
