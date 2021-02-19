#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: Variable char
 * @n: variable int, length char
 *
 */
void reverse_array(int *a, int n)
{
	int temp1, var, j, i;

	temp1 = n - 1;
	j = 0;

	for (i = 0; i < n / 2; i++)
	{
		var = a[j];
		a[j] = a[temp1];
		a[temp1] = var;

		j++;
		temp1--;


	}
}
