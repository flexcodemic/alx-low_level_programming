#include <stdio.h>
/**
*_strlen - a function that returns the length of a string
*
*@s: Check the length of a string
*
*Return: length of the string
*/
int _strlen(char *s)
{
	int myLength = 0;

	while (s[myLength])
		myLength++;
	return (myLength);
}
