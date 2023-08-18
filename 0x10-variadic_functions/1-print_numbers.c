#include <stdarg.h>
#include <stdio.h>
/**
*print_numbers -  a function that prints numbers, followed by a new line
*
*@n: is the number of integers passed to the function
*@separator: not NULL nor last number, then print.
*
*Return: nothing for void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const unsigned int num = va_arg(args, const unsigned int);

		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
