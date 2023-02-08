#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht:  pointer to the hash table to look into
 * @key: the key to get the value of
 *
 * Return: The value associated with the element,
 * Or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, (char *)key) != 0)
			tmp = tmp->next;
		else
			return (tmp->value);
	}
	return (NULL);
}
