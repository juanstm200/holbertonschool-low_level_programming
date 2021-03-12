#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of numbers enter form main
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int resp, cont;

	va_list number;

	resp = 0;

	va_start(number, n);

	for (cont = 0; cont < n; cont++)
	{
		resp += va_arg(number, unsigned int);
	}

	if (n == 0)
	{
		return (0);
	}

	return (resp);
}
