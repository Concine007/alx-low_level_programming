#include "main.h"
#include <stdio.h>

/**
 * _strcat - concentrates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y] != 0; y++)
	{
		dest[x] = src[y];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
