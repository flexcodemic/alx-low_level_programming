#include "lists.h"
/**
*pop_listint - deletes the head node and returns the head node’s data (n)
*
*@head: pointer the head of the list
*
*Return: the data value
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *free_me = *head;

	if (*head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	free_me = *head;
	*head = (*head)->next;
	free(free_me);
	return (n);
}

