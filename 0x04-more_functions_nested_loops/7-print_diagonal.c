#include "holberton.h"

/**
 * print_diagonal - print diagonal line in the main
 * @n: enter from main a integer
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i > 1 && j > 1)
				_putchar(' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
