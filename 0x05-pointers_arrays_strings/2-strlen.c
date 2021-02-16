#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: enter variable char
 * Return: int date to main
 */
int _strlen(char *s)
{
	int longg = 0;

	while (*s != '\0')
	{
		longg++;
		s += 1;
	}

	return (longg);
}
