#include "holberton.h"

/**
 * times_table - Not return int
 *
 */
void times_table(void)
{
	int i;
	int j;
	int numero = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			numero = i * j;
			if (numero <= 9)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + numero);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + numero / 10);
				_putchar('0' + numero % 10);
			}
		}
		_putchar('\n');
	}
}
