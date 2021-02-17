#include "holberton.h"

/**
 * rev_string -  function that reverses a string
 * @s: enter pinter type char from main
 *
 */
void rev_string(char *s)
{
	char gdatos;
	int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
	{}

	j = i - 1;

	for (c = 0; c < (i / 2); c++)
	{
		gdatos = s[j];
		s[j] = s[c];
		s[c] = gdatos;
		j--;
	}
}
