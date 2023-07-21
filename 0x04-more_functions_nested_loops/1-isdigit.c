#include "main.h"
/**
*_isdigit - function that checks for a digit 0 through 9
*
*@c: The character of ASCII code
*
*Return: 1 for digit or 0 for otherwise
*/
int _isdigit(int c)
{
	return ((c >= 48 && c <= 57) ? 1 : 0);
}
