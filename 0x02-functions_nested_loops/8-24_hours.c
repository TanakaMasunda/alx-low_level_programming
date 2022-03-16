#include "main.h"
#include <time.h>

/**
 * jack_bauer - time of his day
 *
 * @M; characteristic check
 *
 * Return: always 0
 */

void jack_bauer(void)

{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
