#include "main.h"

/**
 * is_prime_number - returns 1 if input is a prime number otherwise 0
 *
 * @n: a local var
 *
 * Return: return 1 for success and 0 for otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (prinum_checker(n, n / 2) > 0)
		return (1);
	return (0);
}

/**
 * prinum_checker - checks for prime number
 *
 * @n: local input var
 * @i: local var
 *
 * Return: returns the value of the fxn
 */

int prinum_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prinum_checker(n, i - 1));
}
