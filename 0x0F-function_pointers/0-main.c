#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - This will prints a name as is
 * @name: This is the name of the person
 *
 * Return: Nothing for void.
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - This will print a name in uppercase
 * @name: This the name of the person
 *
 * Return: Nothing for void.
 */
void print_name_uppercase(char *name)
{
	unsigned int i;

	printf("Hello, my uppercase name is ");
	i = 0;
	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
		i++;
	}
}

/**
 * main - Let check the code
 *
 * Return: 0 Always for (Success).
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	printf("\n");
	return (0);
}
