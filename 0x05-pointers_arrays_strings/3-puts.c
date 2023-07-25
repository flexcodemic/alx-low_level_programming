#include "main.h"
/**
*_puts - Write a function that prints a string
*
*@str: This is the pointer to the string
*
*Return: A string with a new line
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
