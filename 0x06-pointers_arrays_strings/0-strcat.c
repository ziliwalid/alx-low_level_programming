#include "main.h"

/**
 * _strcat - el concatination
 * @dest:char
 * @src:char
 * Return: a character
 */
char *_strcat(char *dest, char *src)
{
	char *string = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
