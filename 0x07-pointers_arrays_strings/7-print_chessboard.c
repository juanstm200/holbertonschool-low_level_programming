#include "holberton.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a: Variable pointer char
 */
void print_chessboard(char (*a)[8])
{
	int j, i;


	for (j = 0; j < 8 ; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}

		_putchar('\n');
	}
}
