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
	char r = s[0];
	int count;
	int i = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	while (count >= 0)
	{
		count--;
		r = s[i];
		s[i] = s[count];
		s[count] = r;
		i++;
	}
}
