#include "main.h"

/**
* clear_bit -  sets the value of a bit to 0 at a given index
*
* @n: the number's pointer
* @index:  index, starting from 0 of the bit you want to set
*
* Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_mask;

	bit_mask = 1;
	bit_mask = 1UL << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1UL) == 1)
		*n = bit_mask ^ *n;
	return (1);
}
