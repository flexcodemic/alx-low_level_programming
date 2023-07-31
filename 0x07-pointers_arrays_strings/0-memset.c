#include "main.h"
/**
**_memset - function that fills memory with a constant byte
*
*@s: memory area pointed
*@b: the constant byte
*@n: numbers of times to copy byte
*
*Return: Pointer memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
