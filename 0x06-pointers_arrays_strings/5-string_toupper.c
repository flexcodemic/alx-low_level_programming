#include "main.h"

/**
 * string_toupper - a function that changes
 *all lowercase letters of a string to uppercase
 *
 * @x: This is the pointer to a string
 *
 * Return: pointer to the uppercase string
 */
char *string_toupper(char *x)
{
	int stringLength = 0;

	while (x[stringLength] != '\0')
	{
		if (x[stringLength] >= 'a' && x[stringLength] <= 'z')
		{
			x[stringLength] = x[stringLength] - ('a' - 'A');
		}
		stringLength++;
	}
	return (x);
}
