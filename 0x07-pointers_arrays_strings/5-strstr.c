#include "main.h"

/**
 * _strstr - fxn finds the 1st occurrenece of the substring needle in haysack
 *
 * @haystack: a local pointer var
 * @needle: a local pointer var
 *
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
		{
			return (haystack);
		}

	}

	return (NULL);
}
