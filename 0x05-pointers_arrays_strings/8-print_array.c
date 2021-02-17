#include "holberton.h"
#include <stdio.h>

/**
 * print_array -  imprima elementos de una matriz de enteros
 * @a: matriz
 * @n: size enter of main to fuction
 *
 */
void print_array(int *a, int n)
{
	int i;
	int gda = 0;

	for (i = 0; i <= n - 1; i++)
	{
		gda = a[i];
		printf("%d", gda);

		if (i < (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
