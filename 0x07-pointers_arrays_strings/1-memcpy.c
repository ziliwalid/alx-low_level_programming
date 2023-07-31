#include "main.h"

/**
 * _memcpy - function copies bytes from memo (src to dest)
 * @n: function copies
 * @src: bytes
 * @dest: memo place
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
/* this is getting a bit challenging by the day HAAHHAHA*/
