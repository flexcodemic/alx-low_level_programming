#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @index: is the index, starting from 0
 * of the bit you want to get
 * @n: to check the value, we use n
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int e;

	if (index > sizeof(size_t) * 8)
	{
		return (-1);
	}
	for (e = 0; e < index; e++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
