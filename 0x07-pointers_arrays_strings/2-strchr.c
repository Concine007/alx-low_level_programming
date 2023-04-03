#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: first occurrence character
 * Return: NULL.
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
