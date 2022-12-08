#include <stdio.h>

/**
 * main - main function of the program where all code is executed
 * Description: A c program to print the size of data types in memory
 * Return: The program returns a value of zero
 */

int main(void)

{
	/* main area of code execution */

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a double: %lu bytes(s)\n", sizeof(double));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a 2x long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a long double: %lu byte(s)\n", sizeof(long double));

	return (0);

}

