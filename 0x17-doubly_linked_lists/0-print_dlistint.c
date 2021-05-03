#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: variable pointer of type dlistint_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
