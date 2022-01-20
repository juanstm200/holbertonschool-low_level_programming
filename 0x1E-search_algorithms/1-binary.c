#include "search_algos.h"

/**
 * binary_search - binary search  algo
 * @array: array
 * @size: size
 * @value: search
 * Return: index match or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t left = 0, right = size - 1, midd;

	if (array == NULL)
		return (-1);

	for ( ; left <= right ; )
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%i, ", array[i]);
		}
		printf("%i\n", array[right]);
		midd = (left + right) / 2;
		if (array[midd] < value)
		{
			left = midd + 1;
		}
		else if (array[midd] > value)
		{
			right = midd - 1;
		}
		else
		{
			return (midd);
		}

	}
	return (-1);
}
