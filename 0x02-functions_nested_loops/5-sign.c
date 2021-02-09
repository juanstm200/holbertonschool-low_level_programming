#include "holberton.h"

/**
 * print_sign - gtyjfrtj
 * @n : variable type int
 *
 * Return: type fact int 1 if n is greater 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
