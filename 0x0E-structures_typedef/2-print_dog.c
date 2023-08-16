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
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (double)(d->age));
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
