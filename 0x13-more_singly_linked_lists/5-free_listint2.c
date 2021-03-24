#include "lists.h"

/**
 * free_listint2 - fre the head
 * @head: is the direction list, enter form main
 */
void free_listint2(listint_t **head)
{
	unsigned int i;
	listint_t *fhead;

	if (*head == NULL)
		return;

	for (i = 0; *head != NULL; i++)
	{
		fhead = (*head)->next;
		free(*head);
		*head = fhead;
	}

	*head = NULL;
}
