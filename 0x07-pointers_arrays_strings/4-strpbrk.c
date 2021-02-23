#include "holberton.h"
#include <stddef.h>

/**
* _strpbrk -  function that searches a string for any of a set of bytes.
* @s: array to comparate from main
* @accept: array word comparate from main
* Return: word comparate
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}

		s++;
	}

	return (NULL);
}
