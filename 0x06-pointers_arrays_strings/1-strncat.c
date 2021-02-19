#include "holberton.h"

/**
 * _strncat - concatenates two strings.
 * @dest: variable char dest
 * @src: variable char enter from main
 * @n: length char
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
