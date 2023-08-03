#include "main.h"
/**
*_sqrt_root -  function that returns the natural square root of a number
*
*@x: the input number
*@y: this is the iteration
*
*Return: square or -1
*/
int _sqrt_root(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqrt_root(x, y + 1));
}

/**
*_sqrt_recursion -  function that returns the natural square root of a number
*
*@n: the input number
*
*Return: natural square root
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_root(n, 0));
}
