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
	int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sum++;
	}
	while (sum >= 0)
	{
		_putchar(s[sum]);
		sum--;
	}
	_putchar('\n');
}
