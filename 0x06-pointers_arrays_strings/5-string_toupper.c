#include "holberton.h"

/**
 * string_toupper -  function that changes all lowercase letters of a string
 * @p: variable pointer enter from main
 * Return: string to uppercase.
 */
char *string_toupper(char *p)
{
	int i;
	char *temp = p;
	char begin;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			begin = (p[i] - 32);
			temp[i] = begin;
		}
	}

	return (temp);
}
