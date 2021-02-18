#include "holberton.h"

/**
 * puts_half -  function that prints half of a string
 * @str: variable type char, enter from main
 *
 */
void puts_half(char *str)
{
	int i, j;
	int leng = 0;
	for (i = 0; str[i] != '\0'; i++)
	{}

	leng = i / 2;

	for (j = leng; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
