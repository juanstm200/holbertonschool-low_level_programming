#include "holberton.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: copy src into dest
 * @src: char array from main
 * @n: size array form main
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int conter = n;
	int i;

	for (i = 0; i < conter; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
