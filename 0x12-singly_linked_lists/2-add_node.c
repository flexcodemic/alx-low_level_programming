#include "lists.h"
/**
**add_node - adds a new node at the beginning of a list_t list
*
*@head: This is a pointer to the pointer to the head
*@str: String to add and duplicate
*
*Return: Address of new element otherwise NULL perhap fail
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *latest_node = NULL;

	if (str == NULL)
		return (NULL);
	latest_node = malloc(sizeof(list_t));

	if (latest_node == NULL)
		return (NULL);
	latest_node->str = strdup(str);
	if (latest_node->str == NULL)
	{
		free(latest_node);
		return (NULL);
	}
	latest_node->len = strlen(str);
	latest_node->next = *head;
	*head = latest_node;
	return (latest_node);
}

