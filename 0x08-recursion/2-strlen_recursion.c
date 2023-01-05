#include "main.h"

/**
 * _strlen_recursion - fxn that returns the length of a string
 *
 * @s: a local pointer var
 *
 * Return: returns an int vlaue
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
