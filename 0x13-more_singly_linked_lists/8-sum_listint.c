#include "lists.h"

/**
 * sum_listint - Write a function that returns the sum of all the data (n)
 * @head: is the firsh data form main
 * Return: the usma of all number form head
 */
int sum_listint(listint_t *head)
{
	int answer = 0;
	int i;

	if (head == NULL)
		return (0);

	for (i = 0; head != NULL; i++)
	{
		answer += head->n;
		head = head->next;
	}

	return (answer);
}
