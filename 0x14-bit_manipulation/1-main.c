#include <stdio.h>
#include "main.h"

/**
 * main - Let check the code
 *
 * Return: 0 Always (success).
 */
int main(void)
{
	print_binary(0);
	printf("\n");
	print_binary(1);
	printf("\n");
	print_binary(98);
	printf("\n");
	print_binary(1024);
	printf("\n");
	print_binary((1 << 10) + 1);
	printf("\n");
	return (0);
}
