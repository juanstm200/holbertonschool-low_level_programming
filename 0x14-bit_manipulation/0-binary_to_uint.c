#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: is char enter number binary form main
 * Return: the number of binary to decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int number = 0;
	int i, cont_binary;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			cont_binary = (b[i] - '0');
			number = (number * 2) + cont_binary;
		}
		else
		{
			return (0);
		}
	}

	return (number);
}
