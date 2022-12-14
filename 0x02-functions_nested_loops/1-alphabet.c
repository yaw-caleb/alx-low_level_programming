#include "main.h"

/**
 * print_alphabet - prints using putchar
 *
 * Description:  print out lower case alphabet
 *
 * Return: return the print to stdout
 *
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)

	{
		_putchar(i);
	}

	_putchar('\n');

}
