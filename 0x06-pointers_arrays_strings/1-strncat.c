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
	int slen;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (slen = 0; slen < n; slen++)
	{
		dest[i + slen] = src[slen];
		if (src[slen] == '\0')
			slen = n;
	}

	return (dest);

}
