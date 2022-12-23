#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: a local pointer variable
 * @src: a local pointer variable
 *
 * Return: returns a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int slen = 0;
	int i;

	while (dest[slen])
	{
		slen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[slen] = src[i];
		slen++;
	}

	dest[slen] = '\0';
	return (dest);

}
