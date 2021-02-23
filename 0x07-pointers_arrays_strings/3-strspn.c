#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: array enter from main
 * @accept: array for comparate
 * Return: integer long accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, cont;
	int conter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{}

	for (j = 0; j < i; j++)
	{
		cont = 0;
		for (k = 0; accept[k] != '\0'; k++)
		{

			if (s[j] == accept[k])
			{
				cont = 1;
				conter += 1;
			}
		}
		if (cont == 0)
			return (conter);
	}
	return (conter);
}
