#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main program where code execution
 *
 * Description: A program that generates last digits
 *
 * Return: Returns a value of zero
 */

int main(void)

{
	int n;
	int ls_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ls_dgt = n % 10;
	if (ls_dgt > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ls_dgt);
	}
	else if (ls_dgt == 0)

	{
		printf("Last digit of %d is %d and is 0\n", n, ls_dgt);
	}
	else if (ls_dgt < 6 && ls_dgt != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ls_dgt);
	}


	return (0);

}

