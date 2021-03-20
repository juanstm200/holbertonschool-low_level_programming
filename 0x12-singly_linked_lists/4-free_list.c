#include "lists.h"

/**
 * free_list - clear the data list
 * @head: data entry
 */
void free_list(list_t *head)
{
	list_t *nfree;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		nfree = head->next;
		free(head->str);
		free(head);
		head = nfree;
	}

}
