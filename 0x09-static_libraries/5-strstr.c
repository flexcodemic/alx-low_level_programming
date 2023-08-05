#include "main.h"
/**
**_strstr - function that locates a substring
*
*@haystack: string to be search
*@needle: The substring to be located
*
*Return: a pointer if string is located
*else if not located - NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
