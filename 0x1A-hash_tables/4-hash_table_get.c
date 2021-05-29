#include "hash_tables.h"

/**
 * hash_table_get -  function retrieves value associated with a key
 * @ht: Pointer to the hash table
 * @key: Pointer to string of the key.
 * Return: The pointer to the string of the corresponding
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (!strcmp(temp->key, (char *)key))
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
