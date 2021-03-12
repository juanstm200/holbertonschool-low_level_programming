#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: char that separe the numbers
 * @n: size n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, inter;

	va_list integers;

	inter = 0;

	va_start(integers, n);

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			break;
		}

		inter = va_arg(integers, int);
		printf("%d", inter);

		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	putchar('\n');
}
