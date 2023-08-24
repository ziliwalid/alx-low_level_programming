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
 * add_node_end - adds a new node in the end
 * @head: param
 * @str: str param
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN, *tmpN;

	if (str == NULL)
		return (NULL);
	newN = malloc(sizeof(list_t));
	if (newN == NULL)
		return (NULL);
	newN->str = strdup(str);
	if (newN->str == NULL)
	{
		free(newN);
		return (NULL);
	}
	newN->len = lengthSTR(newN->str);
	newN->next = NULL;
	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}
	tmpN = *head;
	while (tmpN->next)
		tmpN = tmpN->next;
	tmpN->next = newN;
	return (newN);

