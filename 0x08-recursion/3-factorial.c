#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: a local input var
 *
 * Return: returns an int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
