#include "main.h"

/**
* get_bit -  returns the value of a bit at a given index
*
* @n: decimal number to be converted
* @index: index checker
*
* Return: value of the bit at index index or -1
* if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
