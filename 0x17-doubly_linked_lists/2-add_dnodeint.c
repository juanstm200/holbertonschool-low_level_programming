#include "lists.h"

/**
 * add_dnodeint - add a new node
 * @head: variable tipe dlistint_t
 * @n: number enter foem main to struct
 * Return: the date add
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));

	if (!head)
		return (NULL);

	add->n = n;

	if (!*head)
	{
		add->next = *head;
		add->prev = NULL;
		*head = add;
		return (add);
	}

	(*head)->prev = add;
	add->next = *head;
	*head = add;
	return (add);
}
