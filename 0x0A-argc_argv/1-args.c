#include <stdio.h>
/**
* main - prints the number of arguments passed into it
*
*@argc: argument counter
*@argv: array argument element list
*
*Return: Always 0 (Success)
*/
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}