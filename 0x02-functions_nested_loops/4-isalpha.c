#include "main.h"

/* Declaration of upper or lowercase function */
int _isaalpha(int c);

/**
 * _isaalpha - is an alphabetic character
 *
 * Return: 1 if its uppercase or lowercase
 */

int _isaalpha(int c)

{
       	return (c >= 'a' && c <= 'z' && c >= 'A' && c <= 'Z');
}
