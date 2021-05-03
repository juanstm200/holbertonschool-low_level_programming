#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: direction of the head of teh list
 * @n: value of node enter form main
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *addend;
	dlistint_t *temp_node;

	if (!head)
		return (NULL);

	addend = malloc(sizeof(dlistint_t));

	if (addend == NULL)
	{
		free(addend);
		return (NULL);

	}

	addend->n = n;

	if (!*head)
	{
		addend->next = *head;
		addend->prev = NULL;
		*head = addend;
		return (addend);
	}

	temp_node = *head;

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = addend;
	addend->prev = temp_node;
	addend->next = NULL;

	return (addend);
}
