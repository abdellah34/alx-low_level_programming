#include "main.h"
/**
 * len - returns the lenght of a string
 * @s: is the string
 * Return: the result
 */
int len(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + len(s + 1));
}
/**
 * is_palindrome_help - returns the lenght of a string
 * @s: is the string
 * @str: is the start of the string
 * @end: is the end of the string
 * Return: 1 if the string is palindrome otherwise 0
 */
int is_palindrome_help(char *s, int str, int end)
{
	if (str >= end)
	{
		return (1);
	}
	if (s[str] != s[end])
	{
		return (0);
	}
	return (is_palindrome_help(s, str + 1, end - 1));
}
/**
 * is_palindrome - returns the lenght of a string
 * @s: is the string
 * Return: 1 if the string is palindrome
 */
int is_palindrome(char *s)
{
	return (is_palindrome_help(s, 0, len(s) - 1));
}
