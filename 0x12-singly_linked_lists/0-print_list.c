#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements in a singly linked list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int b;

	if (h == NULL)
		return (0);
	for (b = 1; h->next != NULL; b++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%lu] %s\n", h->len, h->str);
	return (b);
}
