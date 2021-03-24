#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: enter fish data form main
 * @index: number of posicion from number research
 * Return: Null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *index_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (index_node);
		index_node = head->next;
	}

	return (NULL);
}
