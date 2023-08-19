#include "function_pointers.h"
/**
*array_iterator - a function given as a parameter on each element of an array
*
*@array: Let target the array
*@size: this will check the array size
*@action: the function pointer to the array
*
*Return: Nothing for void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
