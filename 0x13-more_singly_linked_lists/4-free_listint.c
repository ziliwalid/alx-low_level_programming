#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head param
 * Return: VOID NADAAAAA (null if fails)
 */

void free_listint(listint_t *head)
{
	listint_t *nxtP;

	while (head != NULL)
	{
		nxtP = head->next;
		free(head);
		head = nxtP;
	}
}
