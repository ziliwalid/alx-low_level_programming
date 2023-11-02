#include "hash_tables.h"

/**
 * hash_table_delete - unalives a hash table
 * @ht: hashtable param
 * Return: nada por favor
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *n;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			n = ht->array[i]->n;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = n;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
