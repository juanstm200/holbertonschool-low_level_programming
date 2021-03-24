#include "lists.h"

/**
 * listint_len - number of nodes in the head
 * @h: enter data from main in integer
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
