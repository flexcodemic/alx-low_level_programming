#include "main.h"
#include <stdlib.h>
/**
**_realloc - reallocates a memory block using malloc and free
*
*@ptr; the former pointer to the old memory allocated
*@old_size: this is the old size allocated by malloc in the heap
*@new_size: the _realloc function allocated new size
*
*Return: pointer to the new allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	size_t i, max = new_size;
	char *old_s = ptr;

	if (ptr == NULL)
	{
		s = malloc(new_size);
			return (s);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	s = malloc(new_size);
		if (s == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		s[i] = old_s[i];
	free(s);
	return (s);
}


