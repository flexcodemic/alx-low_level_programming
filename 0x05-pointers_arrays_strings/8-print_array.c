#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: Input array
 * @n: Length of the array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n; arr++)
	{
		printf("%d", a[arr]);
		if (arr != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
