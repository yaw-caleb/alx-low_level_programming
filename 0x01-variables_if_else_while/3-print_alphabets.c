#include <stdio.h>

/**
 * main - main function where all code is executed
 *
 * Description: a program to print uppercase and lower case alphabets
 *
 * Return: Returns of value of zero
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)

	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
