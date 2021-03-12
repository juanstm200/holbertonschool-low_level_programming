#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: char that separate strings
 * @n: amount of string inthe function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strp;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		strp = va_arg(str, char *);

		if (strp == NULL)
		{
			strp = "(nil)";
		}

		if (i != (n - 1) && separator)
		{
			printf("%s", strp);
			printf("%s", separator);
		}
		else
		{
			printf("%s", strp);
		}
	}

	putchar('\n');
}
