#include <stdio.h>

/**
 * main - main code where code executes
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	char f[] = "Fizz";
	char k[] = "Buzz";
	char j[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", k);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", j);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", k);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
