#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment
 * @accept: bytes
 * Return: 0.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, c, d = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				d++;
				c = 1;
			}
		}
		if (c == 0)
			d++;
	}
}
