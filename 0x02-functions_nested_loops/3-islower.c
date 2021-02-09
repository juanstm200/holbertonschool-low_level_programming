#include "holberton.h"

/**
 *_islower - fuction for collection date
 *@c: variable of char
 *Return: 1 if c is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
