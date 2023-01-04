#include "main.h"

/**
 * _memcpy - copies n bytes from memeory area src to memory area dest
 *
 * @dest: a local pointer var
 * @src: a local pointer var
 * @n: a local int var
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
