#include "main.h"
/**
*puts_half -  prints half of a string
*
*@str: input string
*
*Return: Always 0
*/
void puts_half(char *str)
{
	int fullString, halfString;

	fullString = 0;

	while (str[fullString] != '\0')
		fullString++;
	halfString = fullString / 2;

	if (fullString % 2 == 1)
		halfString++;
	while (halfString < fullString)
	{
		_putchar(str[halfString]);
		halfString++;
	}
	_putchar('\n');
}
