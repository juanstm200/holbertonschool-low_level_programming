#include "holberton.h"

/**
 * _putchar - function for print
 * @c: enter character by print
 * Return: the address for print in console
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
