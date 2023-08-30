#include "lists.h"

/**
* find_listint_loop - Let find the loop in a linked list
*
*@head: pointer to the head of the list
*
*Return: NULL if no loop or address of node where loop starts
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *shark = head;
	listint_t *fingerlin = head;

	if (head == NULL || head->next == NULL)
		return (NULL);
	while (shark && fingerlin && fingerlin->next)
	{
		shark = shark->next;
		fingerlin = fingerlin->next->next;
		if (shark == fingerlin)
		{
			shark = head;
			while (shark != fingerlin)
			{
				shark = shark->next;
				fingerlin = fingerlin->next;
			}
			return (shark);
		}
	}
	return (NULL);
}
