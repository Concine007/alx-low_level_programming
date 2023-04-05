#include "main.h"

int checker(char *s, int x, int y);

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: the return value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - compare character of given strings.
 * @s: string.
 * @x: smallest iterator
 * @y: biggest iterator
 * Return: 0.
 */

int checker(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + checker(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - check palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
