#include "lists.h"
/**
 * make_new_node - makes a new node
 * @n: data of node
 * Return: pointer of the node
 */
listint_t *make_new_node(int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer
 * @idx: index position to the new node
 * @n: data of the new node
 * Return: address of new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *tmp, *tmp_old, *new;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	new = make_new_node(n);
	if (new == NULL)
		return (NULL);
	if (*head == NULL || idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (t = 0; t < idx - 1 && tmp != NULL; t++)
		tmp = tmp->next;
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	tmp_old = tmp->next;
	tmp->next = new;
	new->next = tmp_old;

	return (new);
}
