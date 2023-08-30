#include "lists.h"

/**
* free_list_p2 - list to be freed
*
*@head: pointer to the head of the list
*
*Return: Nothing
*/

void free_list_p2(list_p_t **head)
{
	list_p_t *free_me;
	list_p_t *recent;

	if (head != NULL)
	{
		recent = *head;
		while ((free_me = recent) != NULL)
		{
			recent = recent->next;
			free(free_me);
		}
		*head = NULL;
	}
}

/**
* free_listint_safe - frees a listint_t list
*
* @h: pointer to the pointer of the head of the list
*
* Return: list size that was freed
*/
size_t free_listint_safe(listint_t **h)
{
	size_t counter = 0;
	list_p_t *shark, *recent, *add;

	listint_t *head = *h;

	shark = NULL;

	while (head != NULL)
	{
		recent = malloc(sizeof(list_p_t));
		if (recent == NULL)
		{
			free_list_p2(&shark);
			exit(98);
		}
		recent->p = (void *)head;
		recent->next = shark;
		shark = recent;
		add = shark;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				free_list_p2(&shark);
				*h = NULL;
				return (counter);
			}
		}
		free(head);
		head = (head)->next;
		counter++;
	}
	free_list_p2(&shark);
	*h = NULL;
	return (counter);
}
