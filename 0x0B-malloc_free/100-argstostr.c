#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: param
 * @av: param
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	char *s;

	int i;
	int j;
	int tmp;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
		{
			len++;
		}
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		tmp = 0;

		while (s[tmp])
		{
			str[j] = s[tmp];
			tmp++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
