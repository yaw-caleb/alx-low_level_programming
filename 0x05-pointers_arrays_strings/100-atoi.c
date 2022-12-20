#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: pointer in function
 *
 * Return: return an integer converted result
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int n  = 0;
	int m = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			m *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}

		c++;
	}
	n *= m;

	return (n);
}


