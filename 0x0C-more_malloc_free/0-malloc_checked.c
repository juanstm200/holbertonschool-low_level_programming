#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: integer from main of sizeof by date
 * Return: memory of de b
 */
void *malloc_checked(unsigned int b)
{
	void *gdt = NULL;

	gdt = malloc(b);

	if (gdt == NULL)
		exit(98);
	else
		return (gdt);
}
