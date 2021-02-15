#include "holberton.h"

/**
 * swap_int - Not return date
 * @a: integer enter from main, for changing *b
 * @b: integer enter from main, for changing *a
 *
 */
void swap_int(int *a, int *b)
{
	int x = *b;

	*b = *a;
	*a = x;
}
