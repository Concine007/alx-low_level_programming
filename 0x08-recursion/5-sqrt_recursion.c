#include "main.h"

int _sqrt(int n, int x);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input number
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recurses the natural square root of a number
 * @n: input number
 * @x: iterator
 * Return: natural square root
 */

int _sqrt(int n, int x)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);
	return (_sqrt(n, x + 1));
}
