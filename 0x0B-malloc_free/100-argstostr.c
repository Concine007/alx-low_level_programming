#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: count
 * @av: vector
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			c++;
			b++;
		}
		b = 0;
		a++;
	}
	x = malloc((sizeof(char) * c) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			x[d] = av[a][b];
			d++;
			b++;
		}
		x[d] = '\n';
		b = 0;
		d++;
		a++;
	}
	d++;
	x[d] = '\0';
	return (x);
}
