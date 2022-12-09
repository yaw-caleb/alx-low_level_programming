#include <stdio.h>

/**
 * main - main function where code is executed
 *
 * Description: A program to print alphabet in reverse
 *
 * Return: Returns a value of zero
 */

int main(void)

{
	char i;

	for (i = 'z'; i >= 'a'; i--)

	{
		putchar(i);

	}

	putchar('\n');

	return (0);

}
