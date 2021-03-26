#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to interger that have number
 * @index: value return
 * Return: 1 or -1 if work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	char one_bit = 1UL;

	if (index > 20)
		return (-1);

	*n |= (one_bit << index);
	return (1);
}
