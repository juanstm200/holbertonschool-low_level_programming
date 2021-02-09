#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[11] = "Holberton\n";
	int i;

	for (i = 0; i <= 11; i++)
	{
		_putchar (word[i]);
	}

	return (0);
}
