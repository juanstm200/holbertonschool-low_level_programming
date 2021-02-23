#include "holberton.h"
#include <stddef.h>

/**
 * _strstr -  function that locates a substring.
 * @haystack: array, poninter from main
 * @needle: array to comparate
 * Return: null or string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
