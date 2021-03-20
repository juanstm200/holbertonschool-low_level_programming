#include "lists.h"

/**
 * add_node_end - add a new node to the list
 * @head: head structure type to save the data
 * @str: string that enters when the function is invoked
 * Return: the back of the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *tmp2;
	unsigned int n = 0;


	tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);

	while (str[n] != '\0')
		n++;

	tmp2 = *head;
	tmp->str = strdup(str);
	tmp->len = n;
	tmp->next = NULL;

	if (*head != NULL)
	{
		while (tmp2->next)
		{
			tmp2 = tmp2->next;
		}
		tmp2->next = tmp;
	}
	else
	{
		*head = tmp;
		return (tmp);
	}
	return (tmp);
}
