#include "main.h"

/**
 * get_endianness -  checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int e = 1;
	int checker;

	checker = (int) (((char *)&e)[0]);
	return (checker);
}
