#include <stdio.h>
#include <unistd.h>
/**
 * main - main fuction of the program
 * Description: A prgrom to print using the perror()
 * Return: returns a value of one
 */

int main(void)

{
	/* Using the write functio */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
