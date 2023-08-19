#include "function_pointers.h"
/**
*print_name - a function that prints a name
*
*@name: This will be the person name
*@f: This will be string variable holder
*
*Return: Nothing for void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

