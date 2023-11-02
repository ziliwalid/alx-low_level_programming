#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table :)
 * @size: size param
 * Return: pointer to hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht; /*hash table*/
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	return (ht);
}
