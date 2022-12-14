#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: a local varaibale in nthe function
 *
 * Return: Returns the value of the function
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
