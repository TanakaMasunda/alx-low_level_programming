#include <stdio.h>

/**
 * main - prints all argumets it receives
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
