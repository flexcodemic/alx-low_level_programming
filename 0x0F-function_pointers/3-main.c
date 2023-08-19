#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
*main - calculator command line performer
*
*@argc: argument counter
*@argv: This is the argument vector
*
*Return: calculation result
*/
int main(int argc, char *argv[])
{
	char *op;
	int num_1, num_2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num_1 = atoi(argv[1]);
	op = (argv[2]);
	num_2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num_2 == 0) || (*op == '%' && num_2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num_1, num_2));
	return (0);
}

