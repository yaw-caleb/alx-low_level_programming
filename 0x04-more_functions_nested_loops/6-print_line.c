#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: a local variable in the function
 *
 * Return: returns void
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
