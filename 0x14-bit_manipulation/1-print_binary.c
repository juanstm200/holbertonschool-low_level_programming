#include "holberton.h"

/**
 * print_binary - Write a function that prints the binary representation
 * @n: enter number decimal by main
 */
void print_binary(unsigned long int n)
{
	long int number_bit;
	int i, cont = 0;

	if (n == 0  || n == 1)
	{
		_putchar(n + '0');
	}
	else
	{

		for (i = 20; i >= 0; i--)
		{
			number_bit = n >> i;

			if (number_bit & 1)
			{
				_putchar('1');
				cont++;
			}
			else if (cont)
			{
				_putchar('0');
			}
		}
	}

	if (cont != 0)
		_putchar('0');
}
