#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of numbers enter form main
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int a = n;

	va_list sum;

	va_start(sum, n);

	int resp = 0;

	for (; a; a--)
	{
		resp += va_arg(sum, int);
	}

	va_end(sum);
	return (resp);
}
