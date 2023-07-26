#include "main.h"
/**
*reverse_array -  a function that reverses the content of an array of integers
*
*@a: This is the pointer to the array
*@n: The number of array element
*
*Return: void.
*/
void reverse_array(int *a, int n)
{
	int tmp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		tmp = a[counter];
		a[counter++] = a[n];
		a[n--] = tmp;
	}
}
