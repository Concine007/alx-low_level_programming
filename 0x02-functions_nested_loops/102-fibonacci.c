#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;
	long a = 1, b = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%ld", a);
		else if (x == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
		++x;
	}
	printf("\n");
	return (0);
}
