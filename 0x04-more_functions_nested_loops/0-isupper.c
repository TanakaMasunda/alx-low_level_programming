#include "main.h"

/**
 * _isupper - uppercase character
 *@c: the character to be checked
 * Return: Always 0 on success
 */

int _isupper(int c)

{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
