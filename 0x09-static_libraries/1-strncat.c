#include "main.h"
/**
**_strncat -  a function that concatenates two strings
*
*@dest: This is the destination pointer
*@src: This is the source pointer
*@n: This is the number of bytes to be concatenated
*Return: The pointer to it's destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int stringLength, w;

	stringLength = 0;
	while (dest[stringLength] != '\0')
	{
		stringLength++;
	}
	for (w = 0; w < n && src[w] != '\0'; w++, stringLength++)
	{
		dest[stringLength] = src[w];
	}
	dest[stringLength] = '\0';
	return (dest);
}
