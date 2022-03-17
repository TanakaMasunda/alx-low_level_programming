#include "main.h"

/**
 * _isdigit -  checks if input is a digit
 * @c: is the iput character
 * Return:  1 if digit and 0 otherwise
 */

int _isdigit(int c)
{
	c = 0;

	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
