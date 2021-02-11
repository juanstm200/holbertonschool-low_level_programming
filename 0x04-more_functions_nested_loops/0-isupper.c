#include "holberton.h"

/**
 * _isupper - evaluate if c is uppercase or lowercase
 * @c: variable enter datum integer
 * Return: interger number to main
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
