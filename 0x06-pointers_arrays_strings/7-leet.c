#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @c: input value
 * Return: the input value c.
 */

char *leet(char *c)
{
	int a;
	int b;
	char x[] = "aAeEoOtTlL";
	char y[] = "443300771";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (c[a] == x[b])
			{
				c[x] = y[b];
			}
		}
	}
	return (c);
}
