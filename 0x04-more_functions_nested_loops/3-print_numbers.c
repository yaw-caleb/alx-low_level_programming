#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Description: Doesnt print 2 and 4
 *
 * Return: returns void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}


