#include <stdlib.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: conter numbers
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
