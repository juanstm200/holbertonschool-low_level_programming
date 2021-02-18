#include "holberton.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: variable
 * @src: variable
 * Return: char date
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i]; i++)
	{}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
