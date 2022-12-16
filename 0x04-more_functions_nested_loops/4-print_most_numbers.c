#include "main.h"

/**
 * print_most_numbers - prints numbers 0-9 followed by anew line
 *
 *Description: do not print 2 and 4
 *
 * Return: return print statement
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}

		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');

}
