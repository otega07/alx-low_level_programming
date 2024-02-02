#include "lists.h"
/**
 * free_listint2 - function that list nodes and set head to NULL
 * @head: pointer
 * Return: none
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
