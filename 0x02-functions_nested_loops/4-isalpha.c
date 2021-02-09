#include "holberton.h"

/**
 * _isalpha - funtion that init c
 * @c: variable int
 * Return: 1 if c lowercase or uppercase or c if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
