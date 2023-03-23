#include <stdio.h>
#include <math.h>

/**
 * main - main function
 * Return: always 0
 */

int main(void)
{
	long a, b;
	long num = 612852475143;
	double squ = sqrt(num);

	for (a = 1; a <= squ; a++)
	{
	if (num % a == 0)
	{
	b = num / a;
	}
	}
	printf("%ld\n", b);
	return (0);
}
