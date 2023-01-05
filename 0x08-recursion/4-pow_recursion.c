#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power y
 *
 * @x: local int var
 * @y: local int var
 *
 * Return: Returns an int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
