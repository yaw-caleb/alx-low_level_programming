#include "main.h"

/**
 * main - main function where all code is executed
 *
 * Description: a program to print lower case alphabets using putchar
 *
 * Return: Returns a value of 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

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
