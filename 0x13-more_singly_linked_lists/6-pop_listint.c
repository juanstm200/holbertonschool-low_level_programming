#include "lists.h"

/**
 * pop_listint -  function that deletes the head node of a listint_t
 * @head: enter data form main
 * Return: the number form fish node
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *head_node;

	if (*head == NULL)
		return (0);

	head_node = *head;
	number = head_node->n;
	*head = head_node->next;

	if (head_node != NULL)
		free(head_node);

	return (number);
}
