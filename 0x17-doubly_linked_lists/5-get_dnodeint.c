#include "lists.h"

/**
 * get_dnodeint_at_index - add new node in the position index
 * @head: adress of struct
 * @index: the position of node from main
 * Return:  returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodesave;
	unsigned int index_node;

	if (head == NULL)
		return (NULL);

	for (index_node = 0; head != NULL && index_node < index; index_node++)
	{
		head = head->next;
	}

	nodesave = head;

	return (nodesave);
}
