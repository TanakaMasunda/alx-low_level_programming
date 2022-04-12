#include <stdio.h>

#define FILENAME

/**
 * main - main function to print name of file program was compiled from
 * Return: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
