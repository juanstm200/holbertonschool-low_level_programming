#include "holberton.h"

/**
 * print_line - print char _ in the program
 * @n: variable entrance from the main
 *
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');

}
