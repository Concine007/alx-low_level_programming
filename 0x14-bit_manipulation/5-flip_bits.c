#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, y = 0;
unsigned long int z;
unsigned long int e = n ^ m;

for (x = 63; x >= 0; x--)
{
z = e >> x;
if (z & 1)
y++;
}
return (y);
}
