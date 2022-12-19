#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: a pointer variable of the function
 *
 * Return: returns void
 */

void print_rev(char *s)
{
	int i;
	int n;
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	for (n = (sum - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
