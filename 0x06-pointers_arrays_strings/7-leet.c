#include "holberton.h"

/**
 * leet - write a secret code in our message
 * @s: Variable char from enter main
 * Return: the secret code
 */
char *leet(char *s)
{
	int i, j;

	char lett [11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (s[i] == lett[j])
				s[i] = num[j];

		}
	}

	return (s);
}
