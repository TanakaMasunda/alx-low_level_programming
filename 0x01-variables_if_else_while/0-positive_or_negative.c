#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
#include <stdio.h>
/* betty style doc for function main goes there */
/* main - prints if value is positive or negative
 * Return: 0 if exited properly
 */
int main (void)
{ 
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n > 0 )
	{
		printf("Value is positive\n" );
	} else if(n == 0)
	{
		printf("Value is zero\n");
	} else 
	{
		printf("Value is negative\n");
	}

	return (0);
}
