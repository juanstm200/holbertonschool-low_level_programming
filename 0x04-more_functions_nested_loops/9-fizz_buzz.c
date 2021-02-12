#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int fizz = i % 3;
		int buzz = i % 5;

		if (fizz == 0 && buzz == 0)
		{
			printf("FizzBuzz ");
		}
		else if (fizz == 0)
		{
			printf("Fizz ");
		}
		else if (buzz == 0)
		{
			printf("Buzz ");
		}
		else if ((i != (fizz == 0)) && (i != (buzz == 0)))
		{
			printf("%d ", i);
		}
	}
	_putchar('\n');
	return (0);
}
