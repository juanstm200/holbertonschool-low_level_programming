#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[10] = "Holberton\n";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (word[i]);
	}

	return (0);
}
