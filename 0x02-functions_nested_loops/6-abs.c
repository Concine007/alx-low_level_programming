#include "main.h"

/**
 * _abs - lwc characters
 * @a: function parameter
 * Return: 1 and 0 and -1
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
