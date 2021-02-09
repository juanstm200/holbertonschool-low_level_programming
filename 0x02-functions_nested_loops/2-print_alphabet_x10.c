#include "holberton.h"

/**
 * print_alphabet_x10 - print new lines
 *
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
