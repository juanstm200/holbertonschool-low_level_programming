#include "holberton.h"

/**
 * _strcat -  concatenates two strings
 * @dest: Variable char
 * @src: Variable char
 * Return: char dest
 */
char *_strcat(char *dest, char *src)
{
	char *i, *j;

	for (i = dest; *i != '\0'; i++)
	{}

	for (j = src; *j != '\0'; j++, i++)
	{
		*i = *j;
	}

	*i = '\0';

	return (dest);
}
