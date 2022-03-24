#include "main.h"

/**
 * reverse_array - print array in reverse
 * @a: first integer
 * @n: second integer
 * Return: i array values
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != 0)
	{
		printf(", ");
	}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
