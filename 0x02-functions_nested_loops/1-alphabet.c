#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - print alphabet of a to z
 *
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar('\n');
}
