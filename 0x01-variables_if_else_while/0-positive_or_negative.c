#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description - to check if an integer is positive or negative
 * main - prints if value is positive or negative
 * Return: 0 if exited properly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	} else if(n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
