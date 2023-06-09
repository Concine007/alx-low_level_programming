#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the modified string
 * Return: empty
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char t;

	while (s[i++])
		l++;
	for (i = l - 1; i >= l / 2; i--)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
