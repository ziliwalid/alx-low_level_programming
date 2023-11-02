#include "hash_tables.h"

/**
 * hash_table_print - prints hashtable
 * @ht: hash table param
 * Return: void, nadaaaaaaaaaaaaaaaaaa
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char f = 0; /* flag */
	hash_node_t *temporary;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temporary = ht->array[i];
		while (temporary != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", temporary->key, temporary->value);
			f = 1;
			temporary = temporary->next;
		}
	}
	printf("}\n");
}
