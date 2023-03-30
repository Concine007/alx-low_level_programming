#include "main.h"

/**
 * _strncpy - copies at most an inputed number
 * @dest: storing buffer string
 * @src: source string
 * @n: number of bytes
 * Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int l = 0;

	while (src[x++])
		l++;
	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];
	for (x = l; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
