#include "lists.h"

/**
 * free_listint - free all link list
 * @head: inicialize node
 */
void free_listint(listint_t *head)
{
	unsigned int i;
	listint_t *nfree;

	if (head == NULL)
		return;

	for (i = 0; head != NULL; i++)
	{
		nfree = head->next;
		free(head);
		head = nfree;
	}
}
