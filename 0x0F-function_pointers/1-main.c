#include <stdio.h>
#include "function_pointers.h"
/**
 * print_elem - Let prints an integer
 * @elem: This is the integer to print
 *
 * Return: Nothing for void.
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - Let prints an integer, in hexadecimal
 * @elem: This is the integer to print
 *
 * Return: Nothing for void.
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - Let check the code here
 *
 * Return: 0 Always for (Success).
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
