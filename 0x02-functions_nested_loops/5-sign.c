#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * Description: prints for both positive,negative and zero
 *
 * @n: a local variable in the function
 * Return: Returns a value of 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	return (0);

}
