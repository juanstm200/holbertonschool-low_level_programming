#include <stdio.h>
#include <stdlib.h>

/**
 * main - enter number from console by mult
 * @argc: number of strings form argv
 * @argv: strings enter from console number
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		printf("%d\n", (num1 * num2));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (1);
}
