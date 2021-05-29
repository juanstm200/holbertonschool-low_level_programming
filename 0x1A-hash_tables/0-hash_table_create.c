#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of the hash table to create
 * Return: Pointer to recnt created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int index = 0;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_table_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		return (NULL);
	}

	for (; index < size; index++)
	{
		new_table->array[index] = NULL;
	}

	return (new_table);
}
