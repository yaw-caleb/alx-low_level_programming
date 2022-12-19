#include "main.h"

/**
 * puts2 - prints every other character in a string starting with the
 * first character
 *
 * @str: a local pointer variable
 *
 * Return: returns a void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
