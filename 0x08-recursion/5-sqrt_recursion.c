#include "holberton.h"

/**
 * valueSqrt - enter number form sqrt calc sqrt of number
 * @num: enter form _sqrt but calc sqrt
 * @value: integer number
 * Return: value of fuction sqrt
 */
int valueSqrt(int num, int  value)
{
	if (num == (value *  value))
	{
		return (value);
	}
	else if (num < (value * value))
	{
		return (-1);
	}
	else
	{
		return (valueSqrt(num, value + 1));
	}
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: variable from enter main
 * Return: value of sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (valueSqrt(n, 0));
}
