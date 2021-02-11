#include "holberton.h"
#include <unistd.h>



/**
 * _printchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * more_numbers - print number if are diferent from 2 and 4
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar (j + '0');
			}
			else
			{
				int divi, modu;

				divi = j / 10;
				modu = j % 10;
				_putchar (divi + '0');
				_putchar (modu + '0');
			}
		}
		_printchar ('\n');
	}
}
