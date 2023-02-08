#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table to be printed
 *
 * Return: Nothing (void).
 * Description: Key/value are printed in the order
 * that they appear in the array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (comma_flag == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				comma_flag = 1;
			}
			else
			{
				printf(", '%s': '%s'", tmp->key, tmp->value);
			}
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
