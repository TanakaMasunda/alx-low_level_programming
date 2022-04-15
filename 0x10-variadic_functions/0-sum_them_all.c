#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - add all the parameters
 * @n: one of the parameters
 * Return: 0 on if n == 0
 */

int
int sum_them_all(const unsigned int n, ...)
{
	va_list me;
	int i, sum;

	va_start(me, n);

	if (n == 0)
		return (0);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(me, int);

	va_end (me);
	return (sum);
}
