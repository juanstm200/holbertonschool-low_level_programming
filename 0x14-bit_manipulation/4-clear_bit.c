#include "holberton.h"

/**
 * clear_bit - Write a function that sets the value of a bit to 0
 * @n: value pointer thet manipule
 * @index: number of position to index
 * Return: 1 or -1 if work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char clear_bit = 1UL;

	if (index > 20)
		return (-1);

	*n &= ~(clear_bit << index);
	return (1);
}
