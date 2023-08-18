#include <stdio.h>
#include <stdarg.h>
/**
*print_strings -  a function that prints strings, followed by a new line
*
*@separator: between string, here the string to be printed
*@n: the string number to be passed
*
*Return: Nothing for void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		const char *my_string = va_arg(args, const char *);

		if (my_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", my_string);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}




