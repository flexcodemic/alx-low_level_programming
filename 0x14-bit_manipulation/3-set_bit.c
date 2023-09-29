#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: the bit pointer to use
 * @index: is the index, starting from 0
 * of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sourcerer;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	sourcerer = 1;
	sourcerer = sourcerer << index;
	*n = ((*n) | sourcerer);
	return (1);
}
