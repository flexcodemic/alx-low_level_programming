#include "lists.h"
/**
**add_node_end -  adds a new node at the end of a list_t list
*
*@head: this is the pointer to the pointer
*@str: string to be added and duplicated
*
*Return: If failed then NULL or else the address of an element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent = *head;
	list_t *latest_node = malloc(sizeof(list_t));

	if (latest_node == NULL)
		return (NULL);
	latest_node->str = strdup(str);
	if (latest_node->str == NULL)
	{
		free(latest_node);
		return (NULL);
	}
	latest_node->len = strlen(str);
	latest_node->next = NULL;
	if (*head == NULL)
	{
		*head = latest_node;
	}
	else
	{
		while (recent->next != NULL)
		{
			recent = recent->next;
		}
		recent->next = latest_node;
	}
	return (latest_node);
}
