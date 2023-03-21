#include "main.h"

/**
 * print_alphabet_x10 - a function prints alphabet in lower case
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int v;
	char x;

	for (v = 1 ; v <= 10 ; v++)
	{
		for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
	_putchar('\n');
	}
}
