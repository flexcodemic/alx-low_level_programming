#include "lists.h"
/**
*delete_nodeint_at_index - deletes the node at index,
*index of a listint_t linked list
*
*@head: pointer to the head of the list
*@index:  index of the node that should be deleted
*
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *my_prev = NULL;
	listint_t *recent = *head;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *free_me = *head;
		*head = (*head)->next;
		free(free_me);
		return (1);
	}
	for (i = 0; recent != NULL && i < index; i++)
	{
		my_prev = recent;
		recent = recent->next;
	}
	if (recent == NULL)
	{
		return (-1);
	}
	my_prev->next = recent->next;
	free(recent);
	return (1);
}
