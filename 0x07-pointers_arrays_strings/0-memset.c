#include "main.h"

/**
 * _memset - a function to fill the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @s: a local pointer variable
 * @b: a local var
 * @n: a local var
 *
 * Return: returns a value when successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
