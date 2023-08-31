#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
*
* @b: pointing to a string of 0 and 1 chars
*
* Return:converted number, or 0 if string b is 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	int power = 0;
	unsigned int result = 0;
	int i;
	int digit;

	if (b == NULL)
	{
		return (0);
	}
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		digit = b[i] - '0';
		result += digit * (1 << power);
		power++;
	}
	return (result);
}
