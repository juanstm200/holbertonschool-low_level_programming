#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: variable head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freelist;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		freelist = head->next;
		free(head);
		head = freelist;
	}
}
