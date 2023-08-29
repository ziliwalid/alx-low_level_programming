#include "lists.h"
/**
 * listint_len - returns elems in a linked list
 * @h: pointer param
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
