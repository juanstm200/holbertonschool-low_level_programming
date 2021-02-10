#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Not return type date
 *
 */
void print_to_98(int n)
{
	int a, i;

	if ( n > 98)
	{
		for (i = n; i >= 98; i--)
		{

			printf("%d", i);

			if (i > 98)
			{
				putchar(',');
				putchar(' ');
			}

		}
	}
	else
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
}
