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
	int i;
	int n = 100;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
