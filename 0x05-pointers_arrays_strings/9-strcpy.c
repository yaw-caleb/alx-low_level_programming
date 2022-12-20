#include "main.h"

/**
 * _strcpy - copies the string pointed to by src including the terminating
 * null byte to the buffer pointed to by dest
 *
 * @dest: pointer in fuction
 * @src: pointer in function
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
