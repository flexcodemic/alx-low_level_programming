#ifndef MY_CUTE_DOG_H
#define MY_CUTE_DOG_H
/**
*struct dog - Declare a structure
*
*@name: member first
*@age: member second
*@owner: member third
*/

struct dog
{

	char *name;
	float age;
	char *owner;
} my_dog;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MY_CUTE_DOG */
