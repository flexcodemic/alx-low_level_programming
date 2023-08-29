#include "lists.h"
/**
* *reverse_listint - reverses a listint_t linked list
*
* @head: pointer to the head of the list
*
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *free_me;
	listint_t *recent;

	if (head == NULL || *head == NULL)
		return (NULL);
	free_me = *head;
	*head = free_me->next;
	free_me->next = NULL;

	while (*head != NULL)
	{
		recent = (*head)->next;
		(*head)->next = free_me;
		free_me = *head;
		if (recent == NULL)
			return (*head);
		*head = recent;
	}
	if (*head == NULL)
	{
		*head = free_me;
	}
	return (*head);
}
