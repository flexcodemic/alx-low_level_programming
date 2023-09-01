#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
*
* @n: the bit pointer
* @index:  index, starting from 0 of the bit you want to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	bit_mask = 1;
	bit_mask = 1UL << index;
	*n = (*n) | bit_mask;
	return (1);
}
