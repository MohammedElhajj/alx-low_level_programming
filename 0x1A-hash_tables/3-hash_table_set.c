#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key to be added or updated
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *copy_value;
	unsigned long int idx, i;

	if (!ht || !key || !*key || !value || !*value)
		return (0);

	copy_value = strdup(value); /* duplicate the value */

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy_value;
			return (1);
		}
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(copy_value);
		return (0);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = copy_value;
	tmp->next = ht->array[idx];
	ht->array[idx] = tmp;

	return (1);
}
