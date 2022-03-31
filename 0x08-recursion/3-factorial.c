#include "main.h"

/**
 * factorial - factorial on numbers
 * @n: integer
 * Return: -1 if theres error
 */

int factorial(int n)
{
	if (n < 0)
	
		return (-1);
	
	 if (n == 0 || n == 1)
	
		return (1);
 	 return (n * factorial(n - 1));
	
}
