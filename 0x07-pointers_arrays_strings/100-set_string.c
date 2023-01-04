#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: local pointer var of a pointer
 * @to: local pointer var
 *
 * Return: Returns a void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
