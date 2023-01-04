#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string s of any of the byte
 * in the string accept
 *
 * @s: a local pointer var
 * @accept: a local pointer var
 *
 * Return: Returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int n = 0;

	while (s[i])
	{
		n = 0;

		while (accept[n])
		{
			if (s[i] == accept[n])

			{
				s += i;

				return (s);
			}

			n++;
		}

		i++;

	}

	return ('\0');
}

