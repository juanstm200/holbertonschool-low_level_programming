#include "hash_tables.h"

/**
 * key_index -  function that gives you the index of a key.
 * @key: calculate the index from
 * @size: Size of the hash table
 * Return: index for the given key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
	{
		return (0);
	}

	return (hash_djb2(key) % size)
}
