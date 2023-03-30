#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array to be reversed
 * @n: number of elements of the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
