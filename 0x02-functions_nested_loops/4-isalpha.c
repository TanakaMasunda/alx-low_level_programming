#include "main.h"

/* Declaration of upper or lowercase function */
int _isalpha(int c);

/**
 * _isalpha - is an alphabetic character
 *
 * @c: the character to check
 *
 * Return: 1 if its uppercase or lowercase
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
