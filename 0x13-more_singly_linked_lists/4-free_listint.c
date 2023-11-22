#include "lists.h"
/**
 * free_listint - function that frees linked list
 * @head: pointer
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
