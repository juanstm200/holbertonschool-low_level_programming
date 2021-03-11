#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - write a function that search a integer
 * @array: set of integer from main to travel
 * @size: size of array form main
 * @cmp: integer to comparate from main
 * Return: the comparate fo cmp or -1 dont
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}

			i++;
		}
	}

	return (-1);
}
