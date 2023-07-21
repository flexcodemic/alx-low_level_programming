#include "main.h"
/**
*positive_or_negative - Check if a number is positive, negative or zero
*@i: The character check on ASCII code
*Return: Always 0 (Success)
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return;
}

