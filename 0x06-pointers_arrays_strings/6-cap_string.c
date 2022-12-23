#include "main.h"

/**
 * cap_string - a function that capitalize all words of a string
 *
 * @n: a variable of the function
 *
 * Return: return a a string
 */

char *cap_string(char *n)
{
	int i;
	int x;
	int cp = 32;

	int sep[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cp;
		}

		cp = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == sep[x])
			{
				x = 12;
				cp = 32;
			}
		}
	}

	return (n);
}
