#include <stdio.h>

/**
 * main - main program function where code is executed
 *
 * Description: a program to print lower case alphabets
 *
 * Return: Returns a value of zero
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}
