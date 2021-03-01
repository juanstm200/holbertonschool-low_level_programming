#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - enter numbers form console
 * @argc: number of string form argv
 * @argv: string form console
 * Return: 1 o 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;

	if (argc > 2)
	{
		for (; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}

			result = result + atoi(argv[i]);
		}

		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
