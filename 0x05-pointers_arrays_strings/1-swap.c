#include "main.h"

/**
 * swap_int - swaps the value of two arguements
 *
 * @a: first arguement to swap
 * @b: second arguement to swap
 *
 * Return: returns a void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
