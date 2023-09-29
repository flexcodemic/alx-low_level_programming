#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: the pointer to the set number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sourcerer;

	sourcerer = 1;
	sourcerer = sourcerer << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	if (((*n >> index) & 1) == 1)
	{
		*n = sourcerer ^ *n;
	}
	return (1);
}
