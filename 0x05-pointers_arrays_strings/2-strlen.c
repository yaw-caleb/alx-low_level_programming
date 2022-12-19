#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a pointer variable of the function
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int n = 1;
	int count = 0;

	char x = s[0];

	while (x != '\0')
	{
		count++;
		x = s[n++];
	}
	return (count);


}
