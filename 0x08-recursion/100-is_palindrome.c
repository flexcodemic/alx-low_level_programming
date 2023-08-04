#include "main.h"
/**
*string_length - returns the length of a string
*
*@s: the string to fin the length of
*
*Return: length of string
*/
int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + string_length(s + 1));
}
/**
*string_compare - string compare
*
*@s: the string
*@left: smallest iteration
*@right: largest iteration
*
*Return: int
*/
int string_compare(char *s, int left, int right)
{
	if (*(s + left) != *(s + right))
	{
		return (0);
	}
	if (left >= right || left == right + 1)
	{
		return (1);
	}
	return (string_compare(s, left + 1, right - 1));
}
/**
*is_palindrome - check if a string is a palindrome
*
*@s: test string
*
*Return: 1 for palindrome otherwise 0 for none
*/
int is_palindrome(char *s)
{
	int length = string_length(s);

	if (*s == '\0')
	{
		return (1);
	}
	return (string_compare(s, 0, length - 1));
}
