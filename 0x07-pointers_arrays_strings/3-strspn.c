#include "main.h"

/**
 * _strspn - retruns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * @s: a local pointer var
 * @accept: a local pointer var
 *
 * Return: returns an int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int b;
	unsigned int ckd = 0;

	while (accept[i])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[i] == s[b])
			{
				ckd++;
			}

			b++;
		}

		i++;

	}

	return (ckd);
}
