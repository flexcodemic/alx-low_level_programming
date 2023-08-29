#include "lists.h"
/**
**add_nodeint_end -  adds a new node at the end of a listint_t list
*
*@head: pointer to the new node
*@n: the integer data input
*
*Return: the address of the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent = *head;
	listint_t *my_new_node = (listint_t *)malloc(sizeof(listint_t));

	if (my_new_node == NULL)
	{
		return (NULL);
	}
	my_new_node->n = n;
	my_new_node->next = NULL;
	if (*head == NULL)
	{
		*head = my_new_node;
		return (my_new_node);
	}
	while (recent->next != NULL)
	{
		recent = recent->next;
	}
	recent->next = my_new_node;
	return (my_new_node);
}
