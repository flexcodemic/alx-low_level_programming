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
	listint_t *my_prev = NULL;
	listint_t *recent = *head;
	listint_t *next = NULL;

	while (recent != NULL)
	{
		next = recent->next;
		recent->next = my_prev;
		my_prev = recent;
		recent = next;
	}
	*head = my_prev;
	return (*head);
}
