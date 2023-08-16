#include <stdlib.h>
#include "dog.h"
/**
**new_dog - Let creates a new dog
*
*@name: The new dog name
*@age: This the new dog age
*@owner: The new dog owner
*
*Return: a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t x, y, z;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (x = 0; name[x] != '\0'; x++)
		;
	x++;
	dog->name = malloc(sizeof(char) * x);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (z = 0; z < x; z++)
		dog->name[z] = name[z];
	dog->age = age;
	for (y = 0; owner[y] != '\0'; y++)
		;
	y++;
	dog->owner = malloc(sizeof(char) * y);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (z = 0; z < y; z++)
		dog->owner[z] = owner[z];
	return (dog);
}
