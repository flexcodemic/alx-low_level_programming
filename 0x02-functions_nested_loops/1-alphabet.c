#include "main.h"
/**
*main - Entry point
*This will print_alphabet of lowercase 'a' to 'z'
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
