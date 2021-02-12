#include "holberton.h"

/**
 * print_triangle - form of triange print
 * @size: variable enter integer
 *
 */

void print_triangle(int size)
{
	int i, j, t;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}

		for (t = 1; t <= i; t++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
