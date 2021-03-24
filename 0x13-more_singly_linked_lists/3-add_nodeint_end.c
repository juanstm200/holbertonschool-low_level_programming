#include "lists.h"

/**
 * add_nodeint_end - unction that adds a new node at the end of a listint_t
 * @head: points to the firs data
 * @n: number enter from main:
 * Return: the new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));

	tmp = *head;
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	else
	{
		*head = new;
		return (new);
	}

	return (new);
}
