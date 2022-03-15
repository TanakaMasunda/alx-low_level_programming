#include "main.h"

/* Declaration of lowercase character function */
int _islower(int c);

/**
 * _islower - checks for lowercase characters
 *
 * @c:the character to check
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)

{
		return (c >= 'a' && c <= 'z');
}
