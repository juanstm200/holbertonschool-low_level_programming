#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table created.
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temporal = NULL;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i] != NULL)
			{
				temporal = ht->array[i];
				ht->array[i] = ht->array[i]->next;
				free(temporal->value);
				free(temporal->key);
				free(temporal);
			}
		}
		free(ht->array);
	}
	free(ht);
}
