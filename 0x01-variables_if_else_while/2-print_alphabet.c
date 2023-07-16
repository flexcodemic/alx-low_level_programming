#include <stdio.h>
/**
* main - Entry point
* Print lowercase letters using putchar
*Return: Always 0 (Success)
*/
int main(void)
{
	char lowerCaseLetter = 'a';

	while (lowerCaseLetter <= 'z')
	{
		putchar(lowerCaseLetter);
		lowerCaseLetter++;
	}
	putchar('\n');
	return (0);
}
