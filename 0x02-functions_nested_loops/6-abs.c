#include "main.h"

/**
 * _abs - returns the absolute value a number
 *@n: local variable
 * Description: works like abs function
 *
 * Return: Returns a vlaue of 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (0);
}
