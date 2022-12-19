#include "main.h"

void _puts(char *str)
{
	int i = 0;
	char n = str[0];

	while (n != '\0')
	{
		_putchar(str[i]);
		n = str[i++];
	}
	_putchar('\n');

}
