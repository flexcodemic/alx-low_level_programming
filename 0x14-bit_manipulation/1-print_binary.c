#include "main.h"

/**
* print_bi_num - prints the binary representation of a number
*
* @n: input for the decimal
*
* Return: Nothing
*/

void print_bi_num(unsigned long int n)
{
	if (n == 0)
		return;
	print_bi_num(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
* print_binary - prints the binary representation of a number
*
* @n: converted decimal number
*
* Return: Nothing
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_bi_num(n);
	}
}

