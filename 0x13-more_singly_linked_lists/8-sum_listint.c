#include "lists.h"
/**
 * sum_listint - sum of all the data
 * @head: head param
 * Return: int, no nada :(
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
