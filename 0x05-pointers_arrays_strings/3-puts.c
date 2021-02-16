#include "holberton.h"

/**
 * _puts - print string enter main
 * @str: print string
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
