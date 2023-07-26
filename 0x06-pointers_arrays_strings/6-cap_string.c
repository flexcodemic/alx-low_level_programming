#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @s: pointer to string
 *
 * Return: The pointer to s
 */
char *cap_string(char *s)
{
	int strCount;

	strCount = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	while (s[strCount] != '\0')
	{
		if (s[strCount] == ' ' || s[strCount] == '\t' || s[strCount] == '\n'
				|| s[strCount] == ',' || s[strCount] == ';' || s[strCount] == '.'
				|| s[strCount] == '!' || s[strCount] == '?' || s[strCount] == '"'
				|| s[strCount] == '(' || s[strCount] == ')' || s[strCount] == '{'
				|| s[strCount] == '}')
		{
			if (s[strCount + 1] >= 'a' && s[strCount + 1] <= 'z')
			{
				s[strCount + 1] = s[strCount + 1] - 32;
			}
		}
		strCount++;
	}
	return (s);
}
