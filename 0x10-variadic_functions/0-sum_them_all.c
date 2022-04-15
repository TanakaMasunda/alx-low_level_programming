#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all the parameters
 * @n: one of the parameters
 * Return: 0 on if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list me;
	int i, sum;
	sum = 0;


	if (n == 0)
		return (0);
	
	va_start(me, n);

	for (i = 0; i < n; i++)
		sum += va_arg(me, int);

	va_end(me);
	return (sum);
}
