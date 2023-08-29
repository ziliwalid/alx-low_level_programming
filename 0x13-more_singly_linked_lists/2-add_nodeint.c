#include "lists.h"
/**
  * add_nodeint - adds a node in the begining
  * @head: head param
  * @n: int param
  * Return: null if it fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nxt;

	if (head == NULL)
	{
		return (NULL);
	}
	nxt = malloc(sizeof(listint_t));
	if (nxt == NULL)
	{
		return (NULL);
	}
	nxt->n = n;
	nxt->next = *head;
	*head = nxt;
	return (nxt);
}
