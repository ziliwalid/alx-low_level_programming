#include "hash_tables.h"

/**
 * make_hash_node - creates a hash node
 * @key: key param
 * @value: param
 * Return: node
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *n;

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
		return (NULL);
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (NULL);
	}
	n->value = strdup(value);
	if (n->value == NULL)
	{
		free(n->key);
		free(n);
		return (NULL);
	}
	n->next = NULL;
	return (n);
}


/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table param
 * @key: key param
 * @value: value param
 * Return: 1 if success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *hash_node, *temp;
	char *nValue;/*new value*/

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			nValue = strdup(value);
			if (nValue == NULL)
				return (0);
			free(temp->value);
			temp->value = nValue;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;
	return (1);
}
