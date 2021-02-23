#include "holberton.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: variable to enter char
 * @to: variable enter from main
 */
void set_string(char **s, char *to)
{
	*s = to;
}
