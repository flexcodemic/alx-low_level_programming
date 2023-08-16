#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize a variable of type struct dog
*
*@d: This is pointer to the new dog
*@name: This will be name of the dog
*@age: This will be the age of the dog
*@owner: This is the owner's
*
*Return: Nothing since is void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

