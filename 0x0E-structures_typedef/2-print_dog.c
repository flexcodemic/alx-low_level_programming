#include <stdio.h>
#include "dog.h"
/**
*print_dog -  a function that prints a struct dog
*
*@d: This is type struct new dog d
*
*Return : nothing for void.
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!((*d).name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("owner: %s\n", (*d).owner);
	}
}
