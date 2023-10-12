#include "lists.h"

/**
 * add_dnodeint - adds a new node in the begining
 * @head: pointer param
 * @n: value param
 * Return: ...
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newV;

	if (head == NULL)
		return (NULL);
	newV = malloc(sizeof(dlistint_t));
	if (newV == NULL)
		return (NULL);
	newV->n = n;
	newV->prev = NULL;
	newV->next = *head;
	*head = newV;
	if (newV->next != NULL)
		(newV->next)->prev = newV;
	return (newV);
}
