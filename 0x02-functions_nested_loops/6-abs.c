#include "holberton.h"

/**
 * _abs - fuction that return int
 * @r : variable of type int
 *
 * Return: r
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (r * (-1));
		return (r);
	}
	else
	{
		return (r);
	}
}
