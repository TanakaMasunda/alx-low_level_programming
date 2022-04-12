#ifndef SUM

#define SUM ((x) + (y))

/**
 * main - function for adding 2 numbers
 * Return: 0 on success
 */

int main(void)
{
	int num1, num2;

	printf("Enter any two numbers: ");
	printf("SUM(%d, %d) = %d\n", num1, num2, SUM(num1, num2));

	return (0);

}
#endif
