#include "lists.h"

/**
 * list_len - count the number of nodes
 * @h: main data entry
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int amount = 0;

	while (h != NULL)
	{
		h = h->next;
		amount++;
	}

	return (amount);
}
