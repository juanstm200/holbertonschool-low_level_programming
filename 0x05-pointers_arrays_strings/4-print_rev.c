#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: variable enter from main
 */
void print_rev(char *s)
{
	int j;
	int i = 0;

        for (j = 0; s[j]; j++)
	{}

	j--;

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
