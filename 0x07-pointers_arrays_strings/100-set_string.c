#include "main.h"
/**
*set_string - sets the value of a pointer to a char
*
*@s: this is the pointer
*@to: This is the char
*Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
