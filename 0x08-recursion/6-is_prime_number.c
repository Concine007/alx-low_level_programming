#include "main.h"

int prime(int n, int x);

/**
 * is_prime_number - checks if the number is prime or not
 * @n: the number to be checked
 * Return: prime value
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - checks if the number is prime
 * @n: the number to be checked
 * @x: iteration
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);
	return (prime(n, x + 1));
}
