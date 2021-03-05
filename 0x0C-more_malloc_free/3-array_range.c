#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 * @min: int number of min integer
 * @max: number
 * Return: pointer a number
 */
int *array_range(int min, int max)
{
	int *point;
	int i, lent;

	if (min > max)
		return (NULL);

	lent = max - min + 1;

	point = malloc(sizeof(int) * lent);

	if (point == NULL)
		return (NULL);

	for (i = min; min <= max; i++)
		point[i] = min++;

	return (point);
}
