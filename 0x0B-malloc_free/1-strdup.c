#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * @str: String enter from main by copy string
 * Return: String cpstr copy of str string
 */
char *_strdup(char *str)
{
	char *cpstr;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{}

	cpstr = (char *) malloc(sizeof(char) * i);

	if (cpstr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		cpstr[j] = str[j];
	}

	return (cpstr);
}
