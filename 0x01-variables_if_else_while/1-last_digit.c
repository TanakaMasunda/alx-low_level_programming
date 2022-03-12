#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - print last digit of n
 * Return: 0 if exited properly
 */

int main(void)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	printf("%d Last digit of n is");
	if ( n > 5)
	{
		printf("%d and is greater than 5\n" , n);
	}
	else (n == 0)
	{
		printf("%d and is 0\n" , n);
	} else if (n < 6)
	{
		printf("%d and is less than 6 and not 0\n" , n );
	}

	return (0);
}
