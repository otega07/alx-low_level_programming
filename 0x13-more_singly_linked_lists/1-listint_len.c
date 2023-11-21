#include "lists.h"
/**
 * listint_len - function that counts number of element
 * @h: pointer
 * Return: number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t noe;

	if (h == NULL)
		return (0);
	for (noe = 0; h != NULL; noe++)
	{
		h = h->next;
	}
	return (noe);
}
