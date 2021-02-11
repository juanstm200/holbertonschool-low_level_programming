#include "holberton.h"

/**
 * print_numbers - print number of 0 to 9 in the main
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
