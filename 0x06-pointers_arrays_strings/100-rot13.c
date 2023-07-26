#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @s: This is the pointer to the string
 *
 * Return: pointer to the encoded string
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
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			for (j = 0; j < 26; j++)
			{
				if (s[i] == myData[j])
				{
					s[i] = dataRot[j];
					break;
				}
			}
		}
		else if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (j = 26; j < 52; j++)
			{
				if (s[i] == myData[j])
				{
					s[i] = dataRot[j];
					break;
				}
			}
		}
	}
	return (s);
}
