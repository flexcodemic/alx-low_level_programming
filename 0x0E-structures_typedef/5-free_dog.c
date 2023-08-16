#include <stdlib.h>
#include "dog.h"
/**
*free_dog - a function that frees dogs
*
*@d: a pointer to the dog_t
*
*Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
