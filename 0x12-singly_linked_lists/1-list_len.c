#include "lists.h"

/**
 * list_len - length of list
 * @h: first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int v;

	if (h == NULL)
		return (0);

	for (v = 1; h->next != NULL; v++)
		h = h->next;
	return (v);
}
