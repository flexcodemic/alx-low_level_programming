#include "main.h"
/**
**_strpbrk - searches a string for any of a set of bytes
*
*@s: String to be search
*@accept: set of bytes to search for
*
*Return: pointer to bytes if a set matches
*if no set matches - NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
