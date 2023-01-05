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
	return (_sqrt(n, 1));
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
	int s = i * i;

	if (s > n)
		return (-1);

	if (s == n)
		return (i);

	return (_sqrt(n, i + 1));
}
