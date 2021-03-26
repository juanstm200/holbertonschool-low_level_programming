#include "holberton.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given index
 * @n: number to transform to binary
 * @index: number of bit in specific
 * Return: number of bit by index
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int number_bit;
	int bit_index;

	if (index > 20)
		return (-1);

	bit_index = (n >> index);
	number_bit = bit_index & 1;

	return (number_bit);
}
