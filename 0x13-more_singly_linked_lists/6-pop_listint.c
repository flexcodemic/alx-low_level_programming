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
	listint_t *free_me = *head;
	int data = free_me->n;

	if (*head == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	free(free_me);
	return (data);
}

