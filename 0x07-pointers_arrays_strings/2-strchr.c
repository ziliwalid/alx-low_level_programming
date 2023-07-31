#include "main.h"

/**
 * _strchr - spotes a char in a string
 * @c: occurrence of the character
 * @s: the string in question
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
