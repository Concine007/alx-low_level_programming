#include "main.h"

/**
 * _isdigit - checks if the char is digit
 * @c: the num to be checked
 * Return: 1 for digit 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
