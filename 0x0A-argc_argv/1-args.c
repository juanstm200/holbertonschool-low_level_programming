#include <stdio.h>

/**
 * main - print number of string
 * @argc: number of string
 * @argv: string emter form console
 * Return: integer 0
 */
int main(int argc, char *argv[])
{
	*argv = argv[0];
	printf("%d\n", (argc - 1));
	return (0);
}
