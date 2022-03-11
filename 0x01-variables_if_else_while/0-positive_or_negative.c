#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description - to check if an integer is positive or negative
 * Main - entry point
 * main - prints is positive if n > 0 or negative if n < 0 and zero ifn = 0
 * Return: 0 if exited properly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
