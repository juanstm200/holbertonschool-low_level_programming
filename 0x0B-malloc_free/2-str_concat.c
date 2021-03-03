#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: String enter form main for concatenar
 * @s2: String enter form main for concatenar with s1
 * Return: String concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *cct;
	unsigned int i, j, count1, count2;

	for (i = 0; s1[i]; i++)
	{}

	for (j = 0; s2[j]; j++)
	{}

	cct = (char *) malloc((i + j) * sizeof(char));

	if (cct == NULL)
	{
		return (NULL);
	}

	count1 = 0;
	count2 = 0;

	while (count1 < i)
	{
		cct[count1] = s1[count1];
		count1++;
	}

	while (count1 < (i + j))
	{
		cct[count1] = s2[count2];
		count1++;
		count2++;
	}

	cct[count1] = '\0';
	return (cct);
}
