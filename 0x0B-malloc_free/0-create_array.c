#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: integer from enter main for size of array
 * @c: character enter form main
 * Return: 0 or null or character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *word;

	if (size == 0)
	{
		return (NULL);
	}

	word = (char *) malloc(size * sizeof(char));

	if (word == NULL)
	{
		return (0);
	}

	for (; i < size; i++)
		word[i] = c;

	word[i + 1] = '\0';
	return (word);
}
