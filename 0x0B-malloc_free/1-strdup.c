#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer that allocates new space in memory
 * @str: source string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *cp; /*copy*/
	int i;
	int len = 0; /*length*/

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	cp = (char *)malloc((sizeof(char) * len) + 1);
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cp[i] = str[i];
	}
	cp[len] = '\0';

	return (cp);
}
