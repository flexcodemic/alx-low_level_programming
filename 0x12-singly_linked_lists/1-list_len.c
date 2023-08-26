#include "lists.h"
/**
*list_len - let returns the number of elements in a linked list_t list
*
*@h: This is the linked lists head
*
*Return: The number of elements in the lists
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
