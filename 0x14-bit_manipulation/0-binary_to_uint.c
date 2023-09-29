#include "main.h"

/**
*binary_to_uint - function that converts a binary number
*to an unsigned int
*
*@b: pointing to a string of 0 and 1 chars
*
*Return: the converted number, or 0 if there is one
*or more chars in the string b that is not 0 or 1
*b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	size_t result;
	size_t power;
	int basement;
	size_t i = 0, j = 0;

	result = 0;
	basement = 2;
	power = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			power = power * basement;
		result = result + (power * (b[i] - 48));
		length--;
		power = 1;
	}
	return (result);
}
