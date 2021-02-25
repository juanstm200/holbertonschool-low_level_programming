#include "holberton.h"
static int cont;

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String enter from main
 * Return: length of string *s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (cont);
	}

	cont += 1;
	cont = _strlen_recursion(s + 1);
	return (cont);
}
