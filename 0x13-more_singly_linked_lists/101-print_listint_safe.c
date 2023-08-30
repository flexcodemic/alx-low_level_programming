#include "lists.h"
/**
* free_list_p - list to be freed
*
*@head: pointer to the head of the list
*
*Return: Nothing
*/
void free_list_p(list_p_t **head)
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
*print_listint_safe - prints a listint_t linked list
*
*@head: pointer to the head of the list
*
*Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	list_p_t *shark, *recent, *add;

	shark = NULL;
	while (head != NULL)
	{
		recent = malloc(sizeof(list_p_t));
		if (recent == NULL)
		{
			free_list_p(&shark);
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
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list_p(&shark);
				return (counter);
			}
		}
		printf("[%p] %d\n", (const void *)head, head->n);
		head = head->next;
		counter++;
	}
	free_list_p(&shark);
	return (counter);
}
