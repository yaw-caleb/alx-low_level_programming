#include "main.h"

/**
 * _isdigit -  function to check for 0-9
 *
 * @c: a local variable for function arguement
 *
 * Return: Returns 1 for success and 0 for otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
