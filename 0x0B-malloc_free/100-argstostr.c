#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
**argstostr - function that concatenates all the arguments of your program
*
*@ac: argument to concatenate
*@av: pointer to pointer string
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}
	ptr = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	ptr[k] = '\0';
	return (ptr);
}
