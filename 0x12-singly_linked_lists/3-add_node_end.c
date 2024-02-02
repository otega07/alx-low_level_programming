#include "lists.h"
int len(const char *str);
list_t *make_node(const char *str);

/**
 * add_node_end - function that adds nodes
 * @head: pointer for the first node
 * @str: new string in the node
 * Return: address of new element or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = make_node(str);
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;

	return (*head);
}

/**
 * make_node - function that creates new nodes
 * @str: string in the new node
 * Return: pointer to memory
 */
list_t *make_node(const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len(str);
	new_node->next = NULL;

	return (new_node);
}

/**
 * len - calculates string length
 * @str: string input
 * Return: length of string
 */

int len(const char *str)
{
	int t = 0;

	if (str == NULL)
		return (0);

	while (str[t] != '\0')
	{
		t++;
	}
	return (t);
}
