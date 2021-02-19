#include "holberton.h"

/**
 * cap_string - write a secret code in our message
 * @p: Variable char from enter main
 * Return: the secret code
 */
char *cap_string(char *p)
{
	int i, j;

	char lett [11] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'};

	for (i = 0; p[i] != '\0'; i++)
	{
		if ((p[i] >= 'a' && p[i] <= 'z') && i == 0)
			p[i] -= 32;

		for (j = 0; lett[j] != '\0'; j++)
		{
			if (p[i] == lett[j])
			{
				if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				{
					p[i + 1] -= 32;
				}
			}
		}
	}

	return (p);
}
