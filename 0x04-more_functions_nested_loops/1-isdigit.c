#include "holberton.h"

/**
 * _isdigit - fuction evalue one fact and retutn 1 or 0
 * @c: variable of integer, enter fact to fuction
 * Return: 1 if c is a number or 0 if c is letter
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
