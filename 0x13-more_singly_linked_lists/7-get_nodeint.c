#include "lists.h"
/**
 * get_nodeint_at_index - function that returns nth node
 * @head: pointer
 * @index: node position to be retrieved
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t;

	for (t = 0; t < index; t++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
