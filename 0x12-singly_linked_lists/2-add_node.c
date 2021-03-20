#include "lists.h"

/**
 * add_node - add a new node to the list
 * @head: head structure type to save the data
 * @str: string that enters when the function is invoked
 * Return: returns the new string entered
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int n = 0;


	tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);

	while (str[n] != '\0')
		n++;

	tmp->len = n;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
