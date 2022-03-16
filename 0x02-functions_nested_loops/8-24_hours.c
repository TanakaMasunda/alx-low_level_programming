#include "main.h"
#include <time.h>

/**
 * jack_bauer - time of his day
 *
 * @m: check charcteristic
 *
 * Return: always 0
 */

void jack_bauer(void)

{
	int H,M;

	for (H= 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			-putchar((M % 10) + '0');
			-putchar('\n');
		}
	}
}
