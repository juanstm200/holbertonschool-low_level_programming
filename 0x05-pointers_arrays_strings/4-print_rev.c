#include "holberton.h"

/**
 * print_rev - prints a string, in reverse
 * @s: variable enter from main
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (*s != '\0')
	{
		len++;
		s += 1;
	}

	for (i = len; i >= 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
