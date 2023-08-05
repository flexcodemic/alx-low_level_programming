#include "main.h"
/**
*_isupper - function that checks for uppercase character
*
*@c: The character of ASCII code
*
*Return: 1 for uppercase or 0 for otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
