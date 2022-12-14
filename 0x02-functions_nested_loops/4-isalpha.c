#include "main.h"

/**
 * _isalpha  - function to execute command.
 *
 * @c: a local variable of the function.
 *
 * Return: Returns 1 if valid and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
