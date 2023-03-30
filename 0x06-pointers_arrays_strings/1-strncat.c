#include "main.h"

/**
 * _strincat - concentrates two strings using at most
 * @dest: string to be appended upon
 * @src: string to be appended to dest
 * @n: number of bytes
 * Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int l = 0;

	while (dest[x++])
		l++;
	for (x = 0; src[x] && x < n; x++)
		dest[l++] = src[x];
	return (dest);
}
