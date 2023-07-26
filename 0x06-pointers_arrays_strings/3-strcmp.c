#include "main.h"
/**
*_strcmp - a function that compares two strings
*
*@s1: This is the pointer to the first string
*@s2: This is the pointer to the second string
*
*Return: value less than 0 if the string is less than the other,
*value greater than 0
*/
int _strcmp(char *s1, char *s2)
{
	int counter, compareValue;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	compareValue = s1[counter] - s2[counter];
	return (compareValue);
}
