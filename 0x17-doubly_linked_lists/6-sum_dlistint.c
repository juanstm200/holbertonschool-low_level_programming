#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list.
 * @head: addres of struct
 * Return: the sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	int i = 0;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
