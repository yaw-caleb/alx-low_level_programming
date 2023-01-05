#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: local var
 *
 * Return: returns an int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (_sqrt(n, (n + 1) / 2));
	}
}

/**
 * _sqrt - checks if perfect square
 *
 * @n: input var
 *
 * @i: a local var
 *
 * Return: returns value of function
 */

int _sqrt(int n, int i)
{

	if (i < 1)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (_sqrt(n, i - 1));
}
