#include "lists.h"
/**
 * list_len - does some checking
 * @h: list param
 * Return: num nodes
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
