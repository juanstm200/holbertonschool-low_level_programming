#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: String 1 to concantenate
* @s2: String concatenate with s1
* @n: number int
* Return: Return pointer concatenate
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cct;
	unsigned int i = 0, j = 0, lent1, lent2;

	for (lent1 = 0; s1[lent1] != '\0'; lent1++)
	{}

	for (lent2 = 0; s2[lent2] != '\0'; lent2++)
	{}

	if (n < lent2)
	{
		cct = malloc((lent1 + n + 1) * sizeof(char));
	}
	else
	{
		cct = malloc((lent1 + lent2 + 1) * sizeof(char));
	}

	if (cct == NULL)
	{
		return (NULL);
	}

	while (i < lent1)
	{
		cct[i] = s1[i];
		i++;
	}

	while (n < lent2 && i < (lent1 + n))
	{
		cct[i++] = s2[j++];
	}

	while (n >= lent2 && i < (lent1 + lent2))
	{
		cct[i++] = s2[j++];
	}
	cct[i] = '\0';
	return (cct);
}
