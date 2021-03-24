#include "lists.h"

/**
 * print_listint - print character enter form main to program
 * @h: is yhe date enter form main
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
