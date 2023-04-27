#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	l = nmemb * size;
	x = malloc(l);
	if (x == NULL)
		return (NULL);
	while (i < l)
	{
		x[i] = 0;
		i++;
	}
	return (x);
}
