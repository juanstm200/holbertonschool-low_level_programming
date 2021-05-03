#include "lists.h"

/**
 * dlistint_len - number of nodes
 * @h: variable of type dlistint
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
