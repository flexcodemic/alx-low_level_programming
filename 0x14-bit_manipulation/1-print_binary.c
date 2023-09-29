#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 *@n: the converted decimal
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		my_binary(n);
	}
}

/**
 * my_binary - a recursion binary representation
 *
 * @n: input for the decimal
 *
 * Return: Nothing
 */

void my_binary(unsigned long int n)
{
	if (n == 0)
		return;
	my_binary(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
