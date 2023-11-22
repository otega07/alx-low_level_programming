#include "lists.h"
/**
 * pop_listint - function that del first node of a list
 * @head: pointer
 * Return: value stored in deleted node, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int t = 0;
	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		t = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (t);
}
