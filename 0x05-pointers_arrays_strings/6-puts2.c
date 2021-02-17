#include "holberton.h"

/**
 * puts2 -  prints every other character of a string
 * @str: pointer enter of main
 *
 */
void puts2(char *str)
{
	int i, count;

	for (i = 0; str[i] != '\0'; i++)
	{}

	for (count = 0; count < i; count += 2)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
