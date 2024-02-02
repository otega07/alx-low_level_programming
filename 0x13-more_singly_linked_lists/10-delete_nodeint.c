#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a list of nodes
 * @head: pointer
 * @index: index of node
 * Return: 1 if successful else -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int v;
	listint_t *temp;
	listint_t *node;

	temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (v = 0; temp != NULL && v < index - 1; v++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	node = temp->next->next;
	free(temp->next);
	temp->next = node;

	return (1);
}
