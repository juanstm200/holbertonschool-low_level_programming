#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: pointer enter from main
 * @c: char to comparate whit pointer s
 * Return: counter char
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *counter = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
		{
			counter = s + j;
			return (counter);
		}
	}
	return (NULL);
}
