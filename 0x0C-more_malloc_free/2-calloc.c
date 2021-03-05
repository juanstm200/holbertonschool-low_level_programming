#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array, using
 * @nmemb: enter form main
 * @size: is the size enter fomr main
 * Return: call
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *call;
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	call = malloc(size * nmemb);

	if (call == NULL)
		return (NULL);

	str = (char *)call;

	if (str == NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			str[i] = 0;
		}
		return (str);
	}

	return (call);
}
