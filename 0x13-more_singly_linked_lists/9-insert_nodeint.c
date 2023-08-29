#include "lists.h"
/**
* *insert_nodeint_at_index - inserts a new node at a given position
*
* @head: pointer to the head of the list
* @idx: index of the list where the new node should be added
* @n: data value int
* Return: NULL, if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *my_new_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *recent = *head;

	if (my_new_node == NULL)
	{
		return (NULL);
	}
	my_new_node->n = n;
	if (idx == 0)
	{
		my_new_node->next = *head;
		*head = my_new_node;
		return (my_new_node);
	}
	for (i = 0; recent != NULL && i < idx - 1; i++)
	{
		recent = recent->next;
	}
	if (recent == NULL)
	{
		free(my_new_node);
		return (NULL);
	}
	my_new_node->next = recent->next;
	recent->next = my_new_node;
	return (my_new_node);
}
