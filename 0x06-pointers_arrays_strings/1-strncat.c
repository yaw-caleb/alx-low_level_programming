#include "main.h"

/**
 * _strncat - concantenates two strings but uses n bytes from src
 * and src wont be null terminated
 *
 * @dest: a local variable in the function; a pointer
 * @src:a local variable in the function; a pointer
 * @n: a local variable of the functio
 *
 * Return: Returns a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int slen  = 0;
	int i = 0;

	while (dest[slen])
	{
		slen++;
	}

	while (i < n && src[i])
	{
		dest[slen++]  = src[i];
		slen++;
		i++;
	}

	dest[slen + n + 1] = '\0';

	return (dest);
}
