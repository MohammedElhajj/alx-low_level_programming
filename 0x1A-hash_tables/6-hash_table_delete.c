#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table to be deleted
 *
 * Return: Nothing (void).
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			tmp = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
