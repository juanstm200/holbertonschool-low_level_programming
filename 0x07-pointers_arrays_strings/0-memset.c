#include "holberton.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: Variable char pinter of array from main
 * @b: date to enterokay to array from main
 * @n: size array from main
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int conter = n;
	int i;

	for (i = 0; i < conter; i++)
	{
		s[i] = b;
	}

	return (s);
}
