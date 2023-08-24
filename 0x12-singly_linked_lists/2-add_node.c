#include "lists.h"

/**
 * lengthSTR - gets the length of a string
 * @c : char pram
 * Return: length
 */
int lengthSTR(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a node
 * @head: head of the list
 * @str: str param
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addedSTRING;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	addedSTRING->str = strdup(str);
	addedSTRING->len = lengthSTR(str);
	addedSTRING->next = *head;
	*head = addedSTRING;

	return (addedSTRING);
}
