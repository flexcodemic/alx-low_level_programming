#include "main.h"

/**
* flip_bits - returns the number of bits you would need to flip
* to get from one number to another
*
* @n: first test number
* @m: second test number
*
* Return: flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_counter;
	unsigned long int display;

	display = n ^ m;
	for (my_counter = 0; display > 0;)
	{
		if ((display & 1) == 1)
			my_counter++;
		display = display >> 1;
	}
	return (my_counter);
}
