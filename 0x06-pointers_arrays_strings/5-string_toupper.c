#include "main.h"

/**
 * string_toupper - a function that chnages all lowercase letters of a string
 * to uppercase
 *
 * @n: a local variable of the function
 *
 * Return: returns a a char
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}

	}

	return (n);
}

