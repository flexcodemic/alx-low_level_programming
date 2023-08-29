#include "lists.h"
/**
*listint_len - returns the number of elements in a linked listint_t list
*
*@h: pointer to the heade of the lists
*
*Return: numbers of element in the list
*/
size_t listint_len(const listint_t *h)
{
	size_t lists_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		lists_counter++;
	}
	return (lists_counter);
}
