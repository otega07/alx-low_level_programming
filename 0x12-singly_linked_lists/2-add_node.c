#include "lists.h"
int len(const char *str);
/**
 * add_node - adds a node at the beginning of a list
 * @str: string attached
 * @head: pointer
 * Return: address or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
			new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	return (*head);
}
/**
 * len - length of string
 * @str: string to get its length
 * Return: lenght of the string
 */
int len(const char *str)
{
	int e;

	if (str == NULL)
		return (0);
	e = 0;
	while  (str[e] != '\0')
	{
		e++;
	}
	return (e);
}
