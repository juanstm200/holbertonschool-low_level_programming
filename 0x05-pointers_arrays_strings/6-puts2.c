#include "holberton.h"

/**
 * puts2 -  prints every other character of a string
 * @str: pointer enter of main
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i <= 30; i++)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}

		if (*str == '\0')
		{
			break;
		}

		str++;
	}
	_putchar('\n');
}
