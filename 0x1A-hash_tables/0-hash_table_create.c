#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 *
 * Return: A pointer to the newly created hash table.
 * Otherwise NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	/* ht is the newly created hash table */

	if (size == 0)
		return (NULL);

	/* Allocate memory and check for malloc */
	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht->array);
		return (NULL);
	}

	return (ht);
}
