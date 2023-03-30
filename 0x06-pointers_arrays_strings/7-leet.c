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
	char s1[] = "aAeEoOtTlL";
	char s2[] = "443300771";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (c[a] == s1[b])
			{
				c[a] = s2[b];
			}
		}
	}
	return (c);
}
