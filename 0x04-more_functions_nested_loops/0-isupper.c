#include "main.h"

/**
 * _isupper -  function to check for uppercase character
 *
 * @n: a local variable in function
 *
 * Return: Returns 1 for sucess and 0 for otherwise
 */

int _isupper(int n)
{
	if ((n >= 'A') && (n <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
