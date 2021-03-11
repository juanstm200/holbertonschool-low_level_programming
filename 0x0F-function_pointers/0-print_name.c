#include <stdlib.h>

/**
 * print_name - Print name
 * @name: enter form main frist date
 * @f: funcion ponter to enter data form main
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
