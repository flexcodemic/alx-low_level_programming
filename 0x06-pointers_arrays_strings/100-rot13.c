#include "main.h"
/**
**rot13 - a function that encodes a string using rot13
*
*@s: This is the pointer to the string
*
*Return: pointer string
*/
char *rot13(char *s)
{
	int i, j;
	char myData[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == myData[j])
		{
			s[i] = dataRot[j];
			break;
		}
		}
	}
	return (s);
}
