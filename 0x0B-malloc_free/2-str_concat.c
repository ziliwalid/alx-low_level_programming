#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concats 2 strings
 * @s1: string
 * @s2: string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int len;
	char *res;

	len1 = 0;
	len2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		{
			len2++;
		}
	}
	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < len1; i++)
	{
		res[i] = s1[i];
	}
	for (int j = 0; j < len2; j++, i++)
	{
		res[i] = s2[j];
	}
	res[len] = '\0';
	return (res);
}
