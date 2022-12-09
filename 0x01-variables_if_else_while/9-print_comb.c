#include <stdio.h>

/**
 * main - main funtion where all code is executed
 *
 * Description: A program to print numbers zero to nine comma-ed
 *
 * Return: Returns a value of zero
 */

int main(void)

{
	int i;

	for (i = 0; i < 10; i++)

	{
		putchar(i + '0');

		if (i != 9)

		{
			putchar(',');
			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
