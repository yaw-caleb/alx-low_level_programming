#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets 10 times.
 *
 * Description: prints using putchar in a nested loop
 *
 * Return: returns a void vlaue
 */

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)

	{
		for (i = 'a'; i <= 'z'; i++)

		{
			_putchar(i);
		}
		_putchar('\n');

		j++;
	}
}
