#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * of intgers
 *
 * @a: local pointer var
 * @size: local int var
 *
 * Return: returns void
 */

void print_diagsums(int *a, int size)
{
	int i, n;
	int ttl = 0;
	int ttl2 = 0;

	for (i  = 0; i <= (size * size); i = i + size + 1)
	{
		ttl = ttl + a[i];
	}

	for (n = size - 1; n <= (size * size) - size; n  = n + size - 1)
	{
		ttl2 = ttl2 + a[n];
	}

	printf("%d, %d\n", ttl, ttl2);
}
