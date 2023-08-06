#include <stdio.h>
/**
*main - prints all arguments it receives
*
*@argc: argument counter
*@argv: array argument for command line element
*
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; i  < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
