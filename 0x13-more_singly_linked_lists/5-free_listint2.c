#include "lists.h"

/**
* free_listint2 - frees a listint_t list
*
* @head: pointer to the next node
*
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *free_me;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		free_me = (*head)->next;
		free(*head);
		*head = free_me;
	}
	free(*head);
	*head = NULL;
}
