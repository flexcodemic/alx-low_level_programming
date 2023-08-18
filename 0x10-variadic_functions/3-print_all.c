#include <stdio.h>
#include <stdarg.h>
/**
*print_all - a function that prints anything
*
*@format: type of argument list to the function
*@*: pointer to any variable data type
*
*Return: Nothing for void
*/
void print_all(const char * const format, ...)
{
	int i = 0, format_stat = 0;

	char *str;
	va_list str_arg;

	va_start(str_arg, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(str_arg, int));
				format_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(str_arg, double));
				format_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(str_arg, int));
				format_stat = 0;
				break;
			case 's':
				str = va_arg(str_arg, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				format_stat = 0;
				break;
			default:
				format_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && format_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(str_arg);
}
