#include "main.h"

/* Declaration of lowercase character function */
int _islower(int c);

/**
 * int c - alphabet characters
 *
 * _islower - check the code
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)

{
		return (c >= 'a' && c <= 'z');
}
