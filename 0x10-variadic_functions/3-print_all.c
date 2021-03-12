#include "variadic_functions.h"
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list all;

	va_start(all, format);
	if (format == NULL)
	{
		return;
	}
	else
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'f':
				printf("%lf", va_arg(all, double));
				break;
			case 's':
				str = va_arg(all, char*);
				if (str == NULL)
					str = "(nil)";

				printf("%s", str);
				break;
			default:
				i++;
				continue;
			}
			printf(", ");
			i++;
		}
	}
	putchar('\n');
}
