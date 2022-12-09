#include <stdio.h>

/**
 * main - main function where all code executes
 *
 * Description: A program to print integers using the putchar
 *
 * Return: Return a value of zero
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)

	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);

}
