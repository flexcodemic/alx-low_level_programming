#include "main.h"
/**
*is_divisible - returns 1 if the input integer is a prime number,
*otherwise return 0
*
*@n: integer to check
*@divisor: check if a number is divisible
*
*Return: 1 for prime or 0 otherwise
*/
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	else if (n % divisor == 0)
	{
		return (1);
	}
	else
	{
		return (is_divisible(n, divisor - 1));
	}
}
/**
*is_prime_number - Recursive function to check if a number is prime
*
*@n: the integer to be checked
*
*Return: 1 for prime or 0 otherwise
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (!is_divisible(n, n - 1));
	}
}
