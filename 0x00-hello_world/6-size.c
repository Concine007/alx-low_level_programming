#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */

int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float v;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(v));
	return (0);
}
