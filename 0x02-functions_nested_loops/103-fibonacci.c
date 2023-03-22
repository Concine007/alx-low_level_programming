#include <stdio.h>

/**
 * main - prints the sum of even fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	long a = 1, b = 2, sum = b;

	while (b + a < 4000000)
	{
		b += a;
	if (b % 2 == 0)
		sum += b;
	a = b - a;
	++x;
	}
	printf("%ld\n", sum);
	return (0);
}
