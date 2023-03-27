#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: string to be printed
 * Return: empty
 */

void puts2(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
