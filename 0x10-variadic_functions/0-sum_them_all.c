#include <stdarg.h>
/**
*sum_them_all - a function that returns the sum of all its parameters
*
*@n: This will be the number of argument input
*
*Return: sum of all arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;


	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			const unsigned int result = va_arg(args, const unsigned int);

			sum += result;
		}
	}
	va_end(args);
	return (sum);
}
