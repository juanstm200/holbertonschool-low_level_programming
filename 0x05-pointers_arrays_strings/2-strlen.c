#include "holberton.h"

int _strlen(char *s)
{
	int longg = 0;

	while (*s != '\0')
	{
		longg++;
		s += 1;
	}

	return (longg);
}
