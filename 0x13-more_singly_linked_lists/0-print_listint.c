#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list
*
*@h: pointer to the head of the lists
*
*Return: the numbers of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t lists_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lists_counter++;
	}
	return (lists_counter);
}
