#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: string to be changed
 * Return: c
 */

char *string_toupper(char *c)
{
	int x = 0;

	while (c[x])
	{
		if (c[x] >= 'a' && c[x] <= 'z')
			c[x] -= 32;
		x++;
	}
	return (c);
}
