#include "main.h"
/**
**_strncpy - a function that copies a string
*
*@dest: This is the destination string pointer
*@src: This is the source string pointer
*
*@n: This is the number of bytes to apply
*
*Return: The pointer to the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int bytesCount;

	for (bytesCount = 0; bytesCount < n && src[bytesCount] != '\0'; bytesCount++)
	{
		dest[bytesCount] = src[bytesCount];
	}
	for (; bytesCount < n; bytesCount++)
	{
		dest[bytesCount] = '\0';
	}
	return (dest);
}
