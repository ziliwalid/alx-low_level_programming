#include "lists.h"
/**
 * print_listint - does printing magic
 * @h: head param
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/*lesss go no more putchar*/
		h = h->next;
		counter++;
	}
	return (counter);
}
