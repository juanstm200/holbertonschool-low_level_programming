#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String enter from main
 * Return: length of string *s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * palindromeRecurse - cont value palindrome
 * @s: String of data
 * @length: length of the string
 * Return: value of palindrome
 */
int palindromeRecurse(char *s, int length)
{
	if (s[0] != s[length])
	{
		return (0);
	}
	else if (length <= 1)
	{
		return (1);
	}
	else
	{
		return (palindromeRecurse(s + 1, length - 2));
	}
}

/**
 * is_palindrome - if a string is a palindrome and 0 if not.
 * @s: String enter form main
 * Return: value to other fuction
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (palindromeRecurse(s, length - 1));
}
