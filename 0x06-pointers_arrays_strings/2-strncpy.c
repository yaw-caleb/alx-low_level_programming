#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: a local variable of the function; a pointer
 * @src: a local variable of the function; a pointer
 * @n: a local variable of the function
 *
 * Return: returns a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
		{
			dest[i] = src[i];
		}
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
