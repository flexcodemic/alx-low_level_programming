#include "lists.h"
/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
*
* @head: pointer to the head of the list
*
*Return: 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}
	return (total_sum);
}
