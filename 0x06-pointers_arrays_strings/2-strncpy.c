#include "holberton.h"

/**
 * _strncpy -  function that copies a string.
 * @dest: variable destino of copy src
 * @src: variable enter from main
 * @n: variable lenght char
 * Return: dest to main
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
