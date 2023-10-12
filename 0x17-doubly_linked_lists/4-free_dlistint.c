#include "lists.h"

/**
 * free_dlistint - frees list :D
 * @head: struct param
 * Return: void, nadaaaaaaaaaaaaaaaaaaaaaa:D
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
