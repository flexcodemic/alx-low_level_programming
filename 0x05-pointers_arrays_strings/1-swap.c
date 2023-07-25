#include <stdio.h>
/**
*swap_int - function that swaps the values of two integers
*
*@a: store the address of b
*@b: store the address of a
*
*Return: Always 0.
*/
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*a = *b;
	*a = swap;
}
