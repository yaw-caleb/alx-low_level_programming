#include "main.h"

/**
 * jack_bauer - prints the minutes in a day
 *
 * Description: prints out every minutes of the date in  24-hr format
 *
 * Return: returns a print statement to stdout
 */

void jack_bauer(void)
{
	int x, y;

	for (x = 0; x < 24; x++)
	{
		for (y = 0; y < 60; y++)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
		}
	}
}

