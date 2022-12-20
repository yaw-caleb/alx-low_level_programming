#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: a local pointer varaible
 *
 * Return: returns void
 */

void rev_string(char *s)
{
	int len  = 0;
	int idx = 0;

	char tmp;

	while (s[idx++])
	{
		len++;
	}
	for (idx = len - 1; idx >= len / 2; idx--)
	{
		tmp = s[idx];
		s[idx] = s[len - idx - 1];
		s[len - idx - 1] = tmp;
	}
}
