#include "holberton.h"

/**
 * jack_bauer - no return
 *
 */
void jack_bauer(void)
{
	int hora, min;

	for (hora = 0; hora <= 23; hora++)
	{
		for (min = 0; min <= 59; min++)
		{
			int h1, h2, m1, m2;
			h1 = hora / 10;
			h2 = hora % 10;

			m1 = min / 10;
			m2 = min % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
