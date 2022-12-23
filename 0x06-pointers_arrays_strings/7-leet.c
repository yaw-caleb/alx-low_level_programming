#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @n: a local variable of a function; a pointer variable
 *
 * Return: returns a char
 */



char *leet(char *n)
{
	int i;
	int x;

	int fd[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int rp[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == fd[x])
			{
				n[i] = rp[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}
