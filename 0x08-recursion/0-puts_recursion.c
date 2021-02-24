#include "holberton.h"

/**
 * _puts_recursion - unction that prints a string
 * @s: enter from main string, print string
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
