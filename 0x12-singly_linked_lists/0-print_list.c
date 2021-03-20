#include "lists.h"

/**
 * print_list - print string from link list
 * @h: is the fist head form list
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	int amount = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%i] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		amount++;
	}

	return (amount);
}
