#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - main function of the program
 *
 *@i: local var
 *
 * Description: a program to generate random numbers
 *
 * Return: Returns a value of zero
 */

void positive_or_negative(int i)

{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
