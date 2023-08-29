#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head param
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *strtC;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	strtC = *head;
	*head = strtC->next;
	n = strtC->n;
	free(strtC);
	return (n);
}

