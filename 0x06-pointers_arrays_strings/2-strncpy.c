#include "main.h"

/**
 *_strncpy - copies a string
 *
 * @src: source
 * @dest: destination
 * @n: length of the int
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
