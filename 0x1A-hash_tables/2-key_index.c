#include "hash_tables.h"
/**
 * key_index - gives index
 * @key: key param
 * @size: size param
 * Return: long int, no nada :(
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
