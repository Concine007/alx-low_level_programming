#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 * @a: integers
 * @size: integers
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
	int x, b, c = 0, d = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
		c = c + a[x];
	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
		d = d + a[b];
	printf("%d, %d\n", c, d);
}
