#include "main.h"

/* Declaration of lowercase character function */
int _islower(int c);

/**
 * _islower - entry point
 *
 *_islower: check the code
 *
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */

int _islower(int c)

{
		return (c >= 'a' && c <= 'z');
}
