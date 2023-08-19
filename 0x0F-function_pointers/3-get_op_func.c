#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
*get_op_func - the function that selects the correct
*function to perform the operation asked by the user
*
*@s: This the operator argument
*
*Return: The result of the choice selected
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
