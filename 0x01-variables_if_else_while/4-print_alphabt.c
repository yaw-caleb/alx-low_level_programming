#include <stdio.h>

/**
 * main - main function where all code is executed
 *
 * Description: A program to print out alphabets except q and e
 *
 * Return: Returns a value of zero when evaluated
 */

int main(void)

{
	int i;

	for (i = 'a'; i <= 'z'; i++)

	{
		if (i != 'e' && i != 'q')

		{
			putchar(i);

		}

	}

	putchar('\n');

	return (0);

}
