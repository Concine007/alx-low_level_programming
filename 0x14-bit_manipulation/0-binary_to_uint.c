#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int y;

if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
y = 2 * y + (b[x] - '0');
}
return (y);
}
