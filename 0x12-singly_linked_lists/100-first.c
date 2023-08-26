#include "lists.h"

void Catch_me_first(void)__attribute__((constructor));
/**
*Catch_me_first - print argument before main function
*/
void Catch_me_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
