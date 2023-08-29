#include "lists.h"
/**
*free_listint2 - frees a listint_t list
*
*@head: pointer to the next node
*
*Return: Nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *free_me;

	while (*head != NULL)
	{
		free_me = *head;
		*head = (*head)->next;
		free(free_me);
	}
	*head = NULL;
}
