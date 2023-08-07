#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: param 1
 * @av: param 2
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	char *str, *ptr;
	int i;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	str = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	ptr = str;
	for (i = 0; i < ac; i++)
	{
		strcpy(ptr, av[i]);
		ptr += strlen(av[i]);
		*ptr++ = '\n';
	}
	*ptr = '\0';
	return (str);
}
