#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
**_strdup -  returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter.
*
*@str: the string to duplicate
*
*Return: the duplicate string
*/
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
