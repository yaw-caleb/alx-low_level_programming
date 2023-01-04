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
	unsigned int i, n, val, ckd;

	for (i  = 0; s[i] != '\0'; i++)
	{
		ckd = 0;

		for (n = 0; accept[n]  != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				ckd = 1;
			}

		}

		if (ckd == 0)
		{
			return (val);
		}
	}

	return (val);

}
