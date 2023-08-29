#include "lists.h"
/**
**add_nodeint -  adds a new node at the beginning of a listint_t list
*
*@head: pointer to point to the new node
*@n: holds the integer data
*
*Return: the address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_new_node = (listint_t *)malloc(sizeof(listint_t));

	if (my_new_node == NULL)
	{
		return (NULL);
	}
	my_new_node->n = n;
	my_new_node->next = *head;
	*head = my_new_node;
	return (my_new_node);
}

