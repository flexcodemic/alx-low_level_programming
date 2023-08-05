#include "main.h"
/**
**_strchr - function that locates a character in a string
*
*@s: string in serach
*@c: character to be located
*
*Return: c if found - pointer to the first occurence
*If c is not found, then NULL
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
