#include <stdio.h>
/**
*main - Entry point
*The lowercase letter with q and e exception
*Return: Always 0 (Success)
*/
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n == 'q' || n == 'e')
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
