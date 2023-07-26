#include "main.h"
/**
**_strcat - a function that concatenates two strings
*
*@dest: This is the destination string pointer
*@src: This is the source string pointer
*
*Return: The pointer to it's destination(string)
*/
char *_strcat(char *dest, char *src)
{
	int stringLength, w;

	stringLength = 0;
	while (dest[stringLength] != '\0')
	{
		stringLength++;
	}
	for (w = 0; src[w] != '\0'; w++, stringLength++)
	{
		dest[stringLength] = src[w];
	}
	dest[stringLength] = '\0';
	return (dest);
}
