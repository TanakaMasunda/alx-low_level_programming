#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - print last digit of n
 * Return: 0 if exited properly
 */

int main(void)
{ 
	
	int n , lastdigit ;
	lastdigit = n % 10

	srand(time(0));
	n = rand() - RAND_MAX /2;
	
	if ( lastdigit > 5)
	{
		printf("%d and is greater than 5\n" , n);
	}
	else (lastdigit == 0)
	{
		printf("%d and is 0\n" , n);
	} else if (lastdigit < 6)
	{
		printf("%d and is less than 6 and not 0\n" , n );
	}

	return (0);
}
