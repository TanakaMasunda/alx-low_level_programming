#include "main.h"

/**
 * _pow_recursion - power of two integers using recursion
 * @x: integer
 * @y: integer
 * Return: -1 if y is < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));

}
