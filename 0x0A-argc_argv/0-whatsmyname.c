#include <stdio.h>
/**
*main -  a program that prints its name
*
*@argc: argument counter
*@argv: array argument for command line element
*
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
