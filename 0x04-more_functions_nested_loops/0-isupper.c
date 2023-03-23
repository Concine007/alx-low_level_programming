#include "main.h"

/**
 * _isupper - checks if the letter is upper
 * @c: the num to be checked
 * Return: 1 for upper letter 0 else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
