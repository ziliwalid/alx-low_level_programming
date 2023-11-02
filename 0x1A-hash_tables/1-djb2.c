#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 alg
 * @str: str param
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int fishle;
	int c;

	fishle = 5381;
	while ((c = *str++))
	{
		fishle = ((fishle << 5) + fishle) + c;
	}
	return (fishle);
}
