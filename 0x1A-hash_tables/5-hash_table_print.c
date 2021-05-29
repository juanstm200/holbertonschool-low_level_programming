#include "hash_tables.h"

/**
 * hash_table_print -  function that prints a hash table.
 * @ht: Pointer to the hash node table.
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	char var = 0;

	if (!ht ||  !ht->array)
	{
		return;
	}

	printf("{");
	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (var == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			var = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
