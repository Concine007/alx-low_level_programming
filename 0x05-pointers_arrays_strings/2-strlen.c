#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the given length
 * Return: length
 */

size_t _strlen(const char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
