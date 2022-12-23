#include "main.h"

/**
 * _strcmp - a function that compares two strings works exactly like strcmp
 *
 * @s1: a local variable of the function
 * @s2: a local variable of the function
 *
 * Return: returns 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
