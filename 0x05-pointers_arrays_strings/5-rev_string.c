#include "main.h"

/**
* rev_string - A function that reverses a string
*
* @s: Pointer pointing to a string
*
*Return: Always 0
*/
void rev_string(char *s)
{
	int myLength, w, half;
	char temp;

	for (myLength = 0; s[myLength] != '\0'; myLength++)
	{
	}
	half = myLength / 2;

	for (w = 0; w < half; w++)
	{
		temp = s[myLength - w - 1];
		s[myLength - w - 1] = s[w];
		s[w] = temp;
	}
}
