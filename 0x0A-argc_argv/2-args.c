#include <stdio.h>

/**
 * main - enter argumnets form console type string
 * @argc: integer number of words
 * @argv: enter string from console
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
