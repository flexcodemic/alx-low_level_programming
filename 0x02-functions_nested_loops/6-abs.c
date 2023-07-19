#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *
 * @i: The number for which absolute value is to be computed
 *
 * Return: Absolute value of a number or zero
 */
int _abs(int i)
{
	if (i <= 0)
	{
		int absValue;

		absValue = i * -1;
		return (absValue);
	}
		return (i);
}
