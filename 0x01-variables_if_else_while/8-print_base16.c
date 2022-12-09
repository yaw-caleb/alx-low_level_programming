#include <stdio.h>

/**
 * main - main function where all code is executed
 *
 * Description: A program to print hexadecimal characters
 *
 * Return: returns a vlaue of zero
 */

int main(void)

{
	int i;
	char u;

	for (i = 0; i < 10; i++)

	{
		putchar((i % 10) + '0');

	}

	for (u = 'a'; u <= 'f'; u++)

	{
		putchar(u);

	}

	putchar('\n');

	return (0);

}
