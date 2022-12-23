#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: a local variable of the function; a pointer
 * @n: a local variable of the function
 *
 * Return: retuns a void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		n--;

		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
