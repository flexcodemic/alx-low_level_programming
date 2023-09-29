#include "main.h"

/**
 * flip_bits - returns the number of bits
 * you would need to flip to get from one number
 * to another.
 *
 * @n: the first comparison number
 * @m: the second comparison number
 *
 * Return: bits needed to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter;
	unsigned long int output;

	output = n ^ m;
	for (counter = 0; output > 0;)
	{
		if ((output & 1) == 1)
		{
			counter++;
		}
		output = output >> 1;
	}
	return (counter);
}
