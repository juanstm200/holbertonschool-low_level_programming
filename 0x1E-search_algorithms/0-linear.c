#include "search_algos.h"

/**
* linear_search - linear search algorithm
* @array: int array to look into
* @size: size_t size of the array
* @value: int value to search for in the array
* Return: index of first match or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
